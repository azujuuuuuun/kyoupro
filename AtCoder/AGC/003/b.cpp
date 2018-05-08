#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    int N;

    cin >> N;
    ll ans = 0;
    ll s = 0;
    for (int i = 0; i < N; i++) {
        ll A;
        cin >> A;
        if (A != 0) {
            s += A;
            if (i == N - 1) {
                ans += s / 2;
            }
        } else {
            ans += s / 2;
            s = 0;
        }
    }

    cout << ans << endl;

    return 0;
}
