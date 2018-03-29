#include <iostream>
using namespace std;
int main (void) {
    int N;
    int M;

    cin >> N >> M;
    int g[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            g[i][j] = 0;
        }
    }
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        g[A][B] = 1;
        g[B][A] = 1;
    }

    for (int i = 0; i < N; i++) {
        int cnt = 0;
        for (int j = 0; j < N; j++) {
            if (g[i][j] == 1) {
                for (int k = 0; k < N; k++) {
                    if (g[j][k] == 1 && k != i && !g[i][k]) {
                        cnt++;
                        g[i][k] = 2;
                    }
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}