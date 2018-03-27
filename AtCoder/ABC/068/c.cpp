#include <iostream>
using namespace std;
const int NM_MAX = 200000;
int N;
int M;
bool c[NM_MAX][NM_MAX];
bool dfs (int v, int cnt, bool visited[NM_MAX]) {
    visited[v] = true;
    if (cnt == 2) {
        if (v == N) return true;
        else return false;
    } else {
        for (int i = 0; i < N; i++) {
            if (c[v][i] && !visited[i]) return dfs(i, cnt + 1, visited);
        }
    }
    return false;
}
int main (void) {
    cin >> N >> M;

    N--;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            c[i][j] = false;
        }
    }

    for (int i = 0; i < M; i++) {
        int a;
        int b;
        cin >> a >> b;
        a--;
        b--;
        c[a][b] = true;
        c[b][a] = true;
    }

    bool visited[N];
    for (int i = 0; i < N; i++) visited[i] = false;

    if (dfs(0, 0, visited)) cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;

    return 0;
}