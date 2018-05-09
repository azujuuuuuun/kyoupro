#include <iostream>
using namespace std;
int main (void) {
    int N;
    int x;

    cin >> N >> x;

    if (x == 1 || x == 2 * N - 1 || (N == 2 && x != 2)) {
        cout << "No" << endl;
    } else if (N == 2) {
        cout << "Yes" << endl;
        cout << 1 << endl;
        cout << 2 << endl;
        cout << 3 << endl;
    } else {
        cout << "Yes" << endl;
        int a[2 * N - 1] = {0};
        if (x == 2) {
            a[N - 2] = x + 1;
            a[N - 1] = x;
            a[N] = x - 1;
            a[N + 1] = x + 2;
            for (int i = 0, n = 1; i < 2 * N - 1; i++) {
                if (n == x - 1) {
                    n = x + 3;
                }
                if (N - 2 <= i && i <= N + 1) {
                    continue;
                }
                a[i] = n++;
            }
        } else {
            a[N - 2] = x - 1;
            a[N - 1] = x;
            a[N] = x + 1;
            a[N + 1] = x - 2;
            for (int i = 0, n = 1; i < 2 * N - 1; i++) {
                if (n == x - 2) {
                    n = x + 2;
                }
                if (N - 2 <= i && i <= N + 1) {
                    continue;
                }
                a[i] = n++;
            }
        }
        for (int i = 0; i < 2 * N - 1; i++) {
            cout << a[i] << endl;
        }
    }

    return 0;
}
