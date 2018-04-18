#include <iostream>
#include <climits>
using namespace std;
const int C_MAX = 40;
const int INF = INT_MAX / 3;
int main (void) {
    int A, B;

    cin >> A >> B;

    int g[C_MAX + 1][C_MAX + 1];
    for (int i = 0; i <= C_MAX; i++) {
        for (int j = 0; j <= C_MAX; j++) {
            if (i == j) {
                g[i][j] = 0;
            } else if (j == i + 1 || j == i + 5 || j == i + 10 || j == i - 1 || j == i - 5 || j == i - 10) {
                g[i][j] = 1;
            } else {
                g[i][j] = INF;
            }
        }
    }

    for (int k = 0; k <= C_MAX; k++) {
        for (int i = 0; i <= C_MAX; i++) {
            for (int j = 0; j <= C_MAX; j++) {
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }

    cout << g[A][B] << endl;

    return 0;
}
