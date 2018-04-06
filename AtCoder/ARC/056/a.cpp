#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    ll A;
    ll B;
    ll K;
    ll L;

    cin >> A >> B >> K >> L;

    ll ans = 0;
    ans += K / L * B;
    K -= K / L * L;
    if (A * K <= B) {
        ans += A * K;
    } else {
        ans += B;
    }

    cout << ans << endl;

    return 0;
}
