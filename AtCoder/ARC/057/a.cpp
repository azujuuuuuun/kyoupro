#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
const ll N = 2 * pow(10, 12);
int main (void) {
    ll A;
    ll K;

    cin >> A >> K;

    if (K == 0) {
        cout << N - A << endl;
        return 0;
    }

    int ans = 0;
    while (true) {
        ans++;
        A += 1 + K * A;
        if (A >= N) {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
