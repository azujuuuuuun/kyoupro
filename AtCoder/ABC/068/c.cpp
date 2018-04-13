#include <iostream>
using namespace std;
int main (void) {
    int N;
    int M;

    cin >> N >> M;
    int from1[N] = {0};
    int toN[N] = {0};
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        if (a == 0) from1[b] = 1;
        if (b == N - 1) toN[a] = 1;
    }
    
    for (int i = 0; i < N; i++) {
        if (from1[i] && toN[i]) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
