#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    int N;
    ll T;

    cin >> N >> T;
    ll now = 0;
    ll ans = 0;
    for (int i = 0; i < N; i++) {
        ll t;
        cin >> t;
        ans += min(t - now, T);
        now = t;
    }
    ans += T;

    cout << ans << endl;

    return 0;
}
