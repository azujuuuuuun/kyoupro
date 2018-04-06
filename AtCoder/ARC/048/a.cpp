#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    ll A, B;

    cin >> A >> B;

    if (A * B > 0) {
        cout << B - A << endl;
    } else {
        cout << B - A - 1 << endl;
    }

    return 0;
}
