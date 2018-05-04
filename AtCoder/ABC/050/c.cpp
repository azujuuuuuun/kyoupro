#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;
const ll MOD = pow(10, 9) + 7;
int main (void) {
    int N;

    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int B[N];
    for (int i = 1; i <= N; i++) {
        B[i - 1] = abs((i - 1) - (N - i));
    }

    sort(A, A + N);
    sort(B, B + N);
    bool same = true;
    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            same = false;
            break;
        }
    }
    ll ans = 0;
    if (!same) {
        ans = 0;
    } else {
        ans = 1;
        for (int i = 0, times = N / 2; i < times; i++) {
            ans = (ans * 2) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}
