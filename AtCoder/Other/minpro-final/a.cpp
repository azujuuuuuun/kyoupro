#include <iostream>
#include <cmath>
using namespace std;
const int N_MAX = pow(10, 5);
int main (void) {
    int N;
    int M;
    int a[N_MAX];

    cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> a[i];

    for (int i = 1; i <= M; i++) {
        int ans = 0;
        for (int j = 0; j < N; j++) {
            int mi = min(i, a[j]);
            bool disjoint = true;
            for (int k = 2; k <= mi; k++) {
                if (i % k == 0 && a[j] % k == 0) disjoint = false;
            }
            if (disjoint) ans++;
        }
        cout << ans << endl;
    }

    return 0;
}