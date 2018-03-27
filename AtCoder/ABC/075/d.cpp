#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;
const int N_MAX = 50;
int main (void) {
    int N;
    int K;
    int x[N_MAX];
    int y[N_MAX];
    ll ans = LLONG_MAX;

    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> x[i] >> y[i];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                for (int l = 0; l < N; l++) {
                    ll x1 = x[i];
                    ll x2 = x[j];
                    ll y1 = y[k];
                    ll y2 = y[l];
                    if (i == j || i == k || i == l || j == k || j == l || k == l) continue;
                    ans = min(ans, abs(x2 - x1) * abs(y2 - y1));
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}