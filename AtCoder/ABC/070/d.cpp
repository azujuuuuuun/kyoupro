#include <iostream>
#include <cmath>
using namespace std;
const int N_MAX = pow(10, 5);
int main (void) {
    int N;
    int c[N_MAX][N_MAX];
    int Q;
    int K;

    cin >> N;
    for (int i = 0; i < N - 1; i++) {
        int a;
        int b;
        cin >> a >> b;
        a--;
        b--;
        cin >> c[a][b];
        c[b][a] = c[a][b];
    }

    cin >> Q >> K;
    K--;
    for (int i = 0; i < Q; i++) {
        int x;
        int y;
        cin >> x >> y;
        x--;
        y--;
        cout << c[x][K] + c[K][y] << endl;
    }

    return 0;
}