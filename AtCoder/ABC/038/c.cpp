#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    ll N;

    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    ll ans = 0;
    ll cnt = 0;
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            cnt++;
        } else if (i == N - 1) {
            if (a[i] > a[i - 1]) {
                cnt++;
            }
            ans += cnt * (cnt + 1) / 2;
            if (a[i] <= a[i - 1]) {
                ans++;
            }
        } else {
            if (a[i] > a[i - 1]) {
                cnt++;
            } else {
                ans += cnt * (cnt + 1) / 2;
                cnt = 1;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
