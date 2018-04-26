#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    int N;

    cin >> N;
    ll A[N], B[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    ll ans = 0;
    for (int i = N - 1; i >= 0; i--) {
        A[i] += ans;
        if (A[i] % B[i] != 0) {
            ans += (A[i] / B[i] + 1) * B[i] - A[i];
        }
    }

    cout << ans << endl;

    return 0;
}
