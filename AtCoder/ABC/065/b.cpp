#include <iostream>
#include <cmath>
using namespace std;
const int N_MAX = pow(10, 5);
int main (void) {
    int N;
    int a[N_MAX + 1];
    int ans = 0;
    int b;

    cin >> N;
    for (int i = 1; i <= N; i++) cin >> a[i];

    b = 1;
    for (int i = 1; i <= N; i++) {
        if (b == 2) {
            cout << ans << endl;
            return 0;
        }
        b = a[b];
        ans++;
    }

    cout << -1 << endl;

    return 0;
}