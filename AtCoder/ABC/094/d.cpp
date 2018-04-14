#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;
int main (void) {
    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);
    double half = (double)a[n - 1] / 2;
    int mi = INT_MAX;
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (abs(a[i] - half) < mi) {
            mi = abs(a[i] - half);
            ans = i;
        }
    }
    cout << a[n - 1] << " " << a[ans] << endl;

    return 0;
}
