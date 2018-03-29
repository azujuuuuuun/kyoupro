#include <iostream>
#include <climits>
using namespace std;
const int INF = INT_MAX / 3;
int main (void) {
    int N;
    int M;

    cin >> N >> M;
    int g[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            g[i][j] = INF;
        }
    }
    for (int i = 0; i < M; i++) {
        int a, b;
        int t;
        cin >> a >> b >> t;
        a--;
        b--;
        g[a][b] = t;
        g[b][a] = t;
    }

    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }

    int ans = INT_MAX;
    for (int i = 0; i < N; i++) {
        int ma = 0;
        for (int j = 0; j < N; j++) {
            if (i == j) {
                continue;
            }
            ma = max(ma, g[i][j]);
        }
        ans = min(ans, ma);
    }

    cout << ans << endl;

    return 0;
}