#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main (void) {
    int n;

    cin >> n;

    int ans = INT_MAX;
    for (int h = 1; h <= sqrt(n); h++) {
        int w = n / h;
        int r = n - h * w;
        ans = min(ans, abs(h - w) + r);
    }

    cout << ans << endl;

    return 0;
}