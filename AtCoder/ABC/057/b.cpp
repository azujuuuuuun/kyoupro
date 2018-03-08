#include <iostream>
#include <climits>
using namespace std;
const int NM_MAX = 50;
int main (void) {
    int N;
    int M;
    int a[NM_MAX], b[NM_MAX];
    int c[NM_MAX], d[NM_MAX];

    cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> a[i] >> b[i];
    for (int i = 0; i < M; i++) cin >> c[i] >> d[i];

    for (int i = 0; i < N; i++) {
        int mi = INT_MAX;
        int mij;
        for (int j = 0; j < M; j++) {
            int distance = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            if (distance < mi) {
                mi = distance;
                mij = j + 1;
            }
        }
        cout << mij << endl;
    }

    return 0;
}