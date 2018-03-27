#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main (void) {
    ll x;
    ll y;
    ll ans = 1;

    cin >> x >> y;

    while (x * pow(2, ans) <= y) {
        ans++;
    }

    cout << ans << endl;
    
    return 0;
}