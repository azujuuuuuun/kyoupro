#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    ll N;
    ll A;
    ll B;

    cin >> N >> A >> B;

    if (A > B || (N == 1 && A != B)) {
        cout << 0 << endl;
    } else {
        ll ma = A + B * (N - 1);
        ll mi = A * (N - 1) + B;
        cout << ma - mi + 1 << endl;
    }

    return 0;
}
