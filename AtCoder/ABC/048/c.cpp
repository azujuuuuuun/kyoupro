#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    int N;
    int x;

    cin >> N >> x;
    int a[N];
    for (int i = 0; i < N; i++) cin >> a[i];

    ll ans = 0;
    if (a[0] > x) {
        ans = a[0] - x;
        a[0] = x;
    }
    for (int i = 0; i < N - 1; i++) {
        if (a[i] + a[i + 1] > x) {
            ans += a[i] + a[i + 1] - x;
            a[i + 1] -= a[i] + a[i + 1] - x;
        }
    }

    cout << ans << endl;

    return 0;
}