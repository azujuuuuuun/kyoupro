#include <iostream>
#include <cmath>
using namespace std;
const int N_MAX = 50;
const int M_MAX = min(N_MAX * (N_MAX - 1) / 2 + 1, 50);
int N;
int M;
bool edge[M_MAX][M_MAX];
int cnt = 0;
bool visited[N_MAX];
void dfs (int v) {
    visited[v] = true;
    for (int i = 0; i < N; i++) {
        if (edge[v][i] && !visited[i]) {
            dfs(i);
        }
    }
}

int main (void) {
    int a[N_MAX];
    int b[N_MAX];

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            edge[i][j] = false;
        }
    }

    for (int i = 0; i < M; i++) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        edge[a[i]][b[i]] = true;
        edge[b[i]][a[i]] = true;
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            visited[j] = false;
        }
        edge[a[i]][b[i]] = false;
        edge[b[i]][a[i]] = false;
        dfs(0);
        bool bridge = true;
        for (int i = 0; i < N; i++) {
            if (!visited[i]) {
                bridge = false;
            }
        }
        if (bridge) {
            cnt++;
        }
        edge[a[i]][b[i]] = true;
        edge[b[i]][a[i]] = true;
    }

    int ans = M - cnt;
    cout << ans << endl;

    return 0;
}