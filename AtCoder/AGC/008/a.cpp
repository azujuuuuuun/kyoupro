#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main (void) {
    ll x, y;

    cin >> x >> y;

    ll ans = 0;
    if (x > y) {
        x *= -1;
        ans++;
    }
    ans += abs(abs(y) - abs(x));
    if (x * y < 0) {
        ans++;
    }

    cout << ans << endl;

    return 0;
}
