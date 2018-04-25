#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main (void) {
    ll n[3];

    for (int i = 0; i < 3; i++) {
        cin >> n[i];
        if (n[i] % 2 == 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    sort(n, n + 3, greater<ll>());

    cout << n[1] * n[2] << endl;

    return 0;
}
