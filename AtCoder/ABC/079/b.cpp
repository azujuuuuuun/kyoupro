#include <iostream>
using namespace std;
typedef long long ll;
ll lucas (int n) {
    ll l0 = 2;
    ll l1 = 1;
    ll l2;
    if (n == 0) return l0;
    else if (n == 1) return l1;
    else {
        for (int i = 0; i < n - 1; i++) {
            l2 = l1 + l0;
            l0 = l1;
            l1 = l2;
        }
    }
    return l1;
}
int main (void) {
    int n;

    cin >> n;

    cout << lucas(n) << endl;

    return 0;
}