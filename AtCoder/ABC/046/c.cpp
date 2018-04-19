#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main (void) {
    int N;

    cin >> N;
    ll A = 1, B = 1;
    for (int i = 0; i < N; i++) {
        ll x, y;
        cin >> x >> y;
        ll n = max((A + x - 1) / x, (B + y - 1) / y);
        A = n * x;
        B = n * y;
    }

    cout << A + B << endl;

    return 0;
}
