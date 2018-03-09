#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    ll N, M;

    cin >> N >> M;

    ll ans = 0;
    if (M <= 2 * N) ans = M / 2;
    else {
        M -= 2 * N;
        ans += N;
        ans += M / 4;
    }

    cout << ans << endl;

    return 0;
}