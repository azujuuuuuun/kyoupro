#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;
int main (void) {
    ll N;
    ll H;
    ll A;
    ll B;
    ll C;
    ll D;
    ll E;

    cin >> N >> H;
    cin >> A >> B >> C >> D >> E;

    ll ans = LLONG_MAX;
    for (ll i = 0; i <= N; i++) {
        ll numerator = N * E - H - (B + E) * i;
        ll j = numerator / (D + E) + 1;
        if (numerator < 0) j = 0;
        ans = min(ans, A * i + C * j);
    }

    cout << ans << endl;

    return 0;
}
