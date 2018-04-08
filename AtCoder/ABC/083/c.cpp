#include <iostream>
#include <cmath>
using namespace std;
typedef unsigned long long ull;
int main (void) {
    ull x;
    ull y;
    ull ans = 0;

    cin >> x >> y;

    while (x <= y) {
        x *= 2;
        ans++;
    }

    cout << ans << endl;

    return 0;
}
