#include <iostream>
using namespace std;
typedef long long ll;
ll x;
ll f (ll n) {
    if (n == -1) return 0;
    else return n / x + 1;
}
int main (void) {
    ll a, b;

    cin >> a >> b >> x;

    cout << f(b) - f(a - 1) << endl;

    return 0;
}