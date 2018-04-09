#include <iostream>
using namespace std;
int main (void) {
    int N;
    int M;

    cin >> N >> M;

    for (int k = 0; k <= N; k++) {
        int i = 3 * N - M + k;
        int j = M - 2 * N - 2 * k;
        if (0 <= i && i <= N && 0 <= j && j <= N) {
            cout << i << " " << j << " " << k << endl;
            return 0;
        }
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}
