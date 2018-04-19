#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
int main (void) {
    int N;

    cin >> N;
    int A[N], B[N], C[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    sort(A, A + N);
    sort(B, B + N);
    sort(C, C + N);

    ll ans = 0;
    for (int i = 0; i < N; i++) {
        ll a = lower_bound(A, A + N, B[i]) - A;
        ll b = N - (upper_bound(C, C + N, B[i]) - C);
        ans += a * b;
    }

    cout << ans << endl;

    return 0;
}
