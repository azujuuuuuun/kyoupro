#include <iostream>
using namespace std;
const int N_MAX = 100;
int main (void) {
    int n;
    int a[2][N_MAX];

    cin >> n;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i < n; i++) a[0][i] += a[0][i - 1];
    a[1][0] += a[0][0];
    for (int i = 1; i < n; i++) {
        a[1][i] += max(a[0][i], a[1][i - 1]);
    }

    cout << a[1][n - 1] << endl;

    return 0;
}