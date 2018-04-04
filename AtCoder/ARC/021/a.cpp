#include <iostream>
using namespace std;
const int N = 4;
int dx[] = {0, -1, 0, 1};
int dy[] = {-1, 0, 1, 0};
int main (void) {
    int A[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++) {
            for (int d = 0; d < N; d++) {
                int ny = y + dy[d];
                int nx = x + dx[d];
                if (0 <= ny && ny < N && 0 <= nx && nx < N) {
                    if (A[ny][nx] == A[y][x]) {
                        cout << "CONTINUE" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "GAMEOVER" << endl;

    return 0;
}