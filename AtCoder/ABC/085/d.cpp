#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
const int N_MAX = pow(10, 5);
int main (void) {
    int n;
    int h;
    int amax = 1;
    int b[N_MAX];
    int ans = 0;
    int bi = 0;

    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a >> b[i];
        amax = max(amax, a);
    }

    sort(b, b + n, greater<int>());

    while (h > 0) {
        if (bi >= n) h -= amax;
        else {
            if (amax >= b[bi]) h -= amax;
            else h -= b[bi++];
        }
        ans++;
    }

    cout << ans << endl;

    return 0;
}