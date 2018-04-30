#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main (void) {
    int N;
    int P;

    cin >> N >> P;
    bool is_all_even = true;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if (A % 2 == 1) {
            is_all_even = false;
        }
    }

    ll ans = 0;
    if (is_all_even) {
        if (!P) {
            ans = pow(2, N);
        }
    } else {
        ans = pow(2, N - 1);
    }

    cout << ans << endl;

    return 0;
}
