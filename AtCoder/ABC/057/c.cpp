#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
typedef long long ll;
ll F (ll A, ll B) {
    string SA = to_string(A);
    string SB = to_string(B);
    return max(SA.length(), SB.length());
}
int main (void) {
    ll N;

    cin >> N;

    ll ans = LLONG_MAX;
    for (ll A = 1; A <= sqrt(N); A++) {
        if (N % A == 0) {
            ll B = N / A;
            ans = min(ans, F(A, B));
        }
    }

    cout << ans << endl;
    
    return 0;
}