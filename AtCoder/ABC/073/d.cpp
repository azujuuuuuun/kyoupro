#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
const int N_MAX = 200;
const int R_MAX = 8;
const int M_MAX = (N_MAX * (N_MAX - 1)) / 2 + 1;
const int INF = INT_MAX / 3;
int N;
int M;
int R;
int r[R_MAX];
int C[M_MAX][M_MAX];
int mi = INF;
void dfs (int p, int sum, bool visited[R_MAX]) {
    bool end = true;
    for (int i = 0; i < R; i++) {
        if (!visited[i]) end = false;
    }
    if (end) {
        mi = min(mi, sum);
        return ;
    }
    for (int i = 0; i < R; i++) {
        if (!visited[i]) {
            visited[i] = true;
            dfs(r[i], sum + C[p][r[i]], visited);
            visited[i] = false;
        }
    }
}

int main (void) {
    bool visited[R_MAX];

    cin >> N >> M >> R;
    for (int i = 0; i < R; i++) {
        int ri;
        cin >> ri;
        ri--;
        r[i] = ri;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = INF;
        }
    }
    for (int i = 0; i < M; i++) {
        int a;
        int b;
        cin >> a >> b;
        a--;
        b--;
        cin >> C[a][b];
        C[b][a] = C[a][b];
    }

    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                C[i][j] = min(C[i][j], C[i][k] + C[k][j]);
            }
        }
    }

    for (int i = 0; i < R; i++) visited[i] = false;

    for (int i = 0; i < R; i++) {
        visited[i] = true;
        dfs(r[i], 0, visited);
        visited[i] = false;
    }

    cout << mi << endl;

    return 0;
}