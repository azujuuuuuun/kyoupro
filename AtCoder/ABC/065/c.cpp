#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define MOD 1000000007
ll factorial(int n) {
    ll ret = 1;
    for (int i = 1; i <= n; i++) {
        ret = ret * i % MOD;
    }
    return ret;
}
int main (void) {
    ll N;
    ll M;

    cin >> N >> M;

    if (abs(N - M) > 1) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = factorial(N) * factorial(M) % MOD;
    if (abs(N - M) == 0) {
        ans = ans * 2 % MOD;
    }

    cout << ans << endl;

    return 0;
}
