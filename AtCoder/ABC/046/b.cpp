#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    int N;
    int K;

    cin >> N >> K;

    ll ans = 1;
    for (int i = 0; i < N; i++) {
        if (i == 0) ans *= K;
        else ans *= (K - 1);
    }

    cout << ans << endl;

    return 0;
}