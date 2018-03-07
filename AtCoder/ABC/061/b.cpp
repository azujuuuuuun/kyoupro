#include <iostream>
using namespace std;
const int N_MAX = 50;
int main (void) {
    int N;
    int M;

    cin >> N >> M;

    int road[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            road[i][j] = 0;
        }
    }

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        road[a][b]++;
        road[b][a]++;
    }

    for (int i = 0; i < N; i++) {
        int ans = 0;
        for (int j = 0; j < N; j++) ans += road[i][j];
        cout << ans << endl;
    }

    return 0;
}