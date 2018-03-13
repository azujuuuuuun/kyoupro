#include <iostream>
using namespace std;
int main (void) {
    int A, B;

    cin >> A >> B;

    int ans = B / A;
    if (B % A != 0) ans++;

    cout << ans << endl;

    return 0;
}