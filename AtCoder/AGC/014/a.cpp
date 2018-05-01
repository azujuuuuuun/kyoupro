#include <iostream>
#include <cmath>
using namespace std;
const int LIMIT = pow(10, 6);
int main (void) {
    int A, B, C;

    cin >> A >> B >> C;

    int ans = 0;
    while (true) {
        if (A % 2 != 0 || B % 2 != 0 || C % 2 != 0) {
            break;
        }
        if (ans == LIMIT) {
            break;
        }
        int a = B / 2 + C / 2;
        int b = C / 2 + A / 2;
        int c = A / 2 + B / 2;
        A = a;
        B = b;
        C = c;
        ans++;
    }

    if (ans == LIMIT) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}
