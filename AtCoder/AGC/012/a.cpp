#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main (void) {
    int N;

    cin >> N;
    ll a[3 * N];
    for (int i = 0; i < 3 * N; i++) {
        cin >> a[i];
    }

    sort(a, a + 3 * N, greater<ll>());
    ll ans = 0;
    for (int i = 1; i <= 2 * N; i += 2) {
        ans += a[i];
    }

    cout << ans << endl;

    return 0;
}
