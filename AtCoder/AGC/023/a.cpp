#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll combination (ll n, ll r) {
    if (n == r || r == 0) {
        return 1;
    } else if (r == 1) {
        return n;
    } else if (n < r || n <= 0) {
        return 0;
    } else {
        return combination(n - 1, r - 1) + combination(n - 1, r);
    }
}
int main (void) {
    int N;

    cin >> N;
    ll A[N];
    ll S[N + 1];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    S[0] = 0;
    for (int i = 0; i < N; i++) {
        S[i + 1] = S[i] + A[i];
    }

    sort(S, S + N + 1);
    ll ans = 0;
    ll n = S[0];
    ll cnt = 1;
    for (int i = 1; i < N + 1; i++) {
        if (i == N) {
            if (S[i] == n) {
                cnt++;
                ans += combination(cnt, 2);
            } else {
                ans += combination(cnt, 2);
            }
        } else {
            if (S[i] == n) {
                cnt++;
            } else {
                ans += combination(cnt, 2);
                n = S[i];
                cnt = 1;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
