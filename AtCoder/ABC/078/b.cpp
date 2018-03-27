#include <iostream>
using namespace std;
int main (void) {
    int X;
    int Y;
    int Z;
    int ans = 0;

    cin >> X >> Y >> Z;

    for (int i = 1; i <= X; i++) {
        if (Y * i + Z * (i + 1) <= X) ans++;
    }

    cout << ans << endl;

    return 0;
}