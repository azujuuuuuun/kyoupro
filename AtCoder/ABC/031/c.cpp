#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int ans = -50 * 50;
    for (int i = 0; i < N; i++) {
        int t;
        int amax = -50 * 50;
        for (int j = 0; j < N; j++) {
            if (i == j) {
                continue;
            }
            int l = min(i, j);
            int r = max(i, j);
            int tscore = 0;
            int ascore = 0;
            for (int k = 0; k < r - l + 1; k++) {
                if (k % 2 == 0) {
                    tscore += a[l + k];
                } else {
                    ascore += a[l + k];
                }
            }
            if (ascore > amax) {
                amax = ascore;
                t = tscore;
            }
        }
        ans = max(ans, t);
    }

    cout << ans << endl;

    return 0;
}
