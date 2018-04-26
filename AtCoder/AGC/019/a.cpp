#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    ll Q;
    ll H;
    ll S;
    ll D;
    ll N;

    cin >> Q >> H >> S >> D;
    cin >> N;

    ll mi2 = min(min(min(8 * Q, 4 * H), 2 * S), D);
    ll mi1 = min(min(4 * Q, 2 * H), S);
    ll ans = (N / 2) * mi2 + (N % 2) * mi1;
    cout << ans << endl;

    return 0;
}
