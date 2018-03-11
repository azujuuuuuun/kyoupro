#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main (void) {
    ll N, M;

    cin >> N >> M;

    ll ans;
    ll mi = min(N, M);
    ll ma = max(N, M);
    if (mi == 1 && ma == 1) ans = 1;
    else if (mi == 1) ans = ma - 2;
    else ans = (N - 2) * (M - 2);

    cout << ans << endl;

    return 0;
}