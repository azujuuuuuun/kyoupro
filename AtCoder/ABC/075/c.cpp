#include <iostream>
#include <cmath>
using namespace std;
const int N_MAX = 50;
const int M_MAX = min(N_MAX * (N_MAX - 1) / 2 + 1, 50);
int N;
int M;
bool edge[M_MAX][M_MAX];
int cnt = 0;
void dfs (int v) {
    bool bridge = true;
    for (int i = 0; i < N; i++) {
        if (!visited[i]) bridge = false;
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
        int ai;
        int bi;
        cin >> ai >> bi;
        ai--;
        bi--;
        a[i] = ai;
        b[i] = bi;
        edge[ai][bi] = true;
        edge[bi][ai] = true;
    }


    for (int i = 0; i < M; i++) {
        for (int j = 0; i < N; i++) visited[i] = false;
        edge[a[i]][b[i]] = false;
        edge[b[i]][a[i]] = false;
        visited[0] = true;
        dfs(0);
        edge[a[i]][b[i]] = true;
        edge[b[i]][a[i]] = true;
    }

    return 0;
}