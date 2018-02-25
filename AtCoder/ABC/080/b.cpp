#include <iostream>
using namespace std;
int f (int x) {
    int ret = 0;

    while (x >= 1) {
        ret += x % 10;
        x /= 10;
    }

    return ret;
}

int main (void) {
    int n;

    cin >> n;

    if (n % f(n) == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}