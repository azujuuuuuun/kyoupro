#include <iostream>
using namespace std;
const int NK_MAX = 5;
int N;
int K;
int T[NK_MAX][NK_MAX];
bool found;
void dfs (int n, int result) {
    if (n >= N) {
        if (result == 0) {
            found = true;
        }
        return ;
    } else {
        for (int i = 0; i < K; i++) {
            if (n == 0) {
                dfs(n + 1, T[n][i]);
            } else {
                dfs(n + 1, (result ^ T[n][i]));
            }
        }
    }
}
int main (void) {
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            cin >> T[i][j];
        }
    }

    dfs(0, 0);

    if (found) {
        cout << "Found" << endl;
    } else {
        cout << "Nothing" << endl;
    }

    return 0;
}
