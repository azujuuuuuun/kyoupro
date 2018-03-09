#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    int X;

    cin >> X;

    for (int i = 1; i <= X; i++) {
        if (i * (i + 1) / 2 >= X) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}