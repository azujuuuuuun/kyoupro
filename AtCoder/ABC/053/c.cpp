#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    ll x;

    cin >> x;

    ll ans = 0;
    ans = x / 11 * 2;
    x = x % 11;
    if (x == 0) ;
    else if (x <= 6) ans++;
    else ans += 2;

    cout << ans << endl;

    return 0;
}