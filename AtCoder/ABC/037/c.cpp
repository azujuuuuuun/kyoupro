#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    int N;
    int K;

    cin >> N >> K;
    int a[N];
    for (int i = 0; i < N; i++) cin >> a[i];

    ll ans = 0;
    ll sum = 0;
    for (int i = 0; i < N; i++) {
        if (i < K) sum += a[i];
        else {
            ans += sum;
            sum -= a[i - K];
            sum += a[i];
        }
    }
    ans += sum;

    cout << ans << endl;

    return 0;
}