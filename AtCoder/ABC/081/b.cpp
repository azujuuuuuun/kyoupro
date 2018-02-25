#include <iostream>
#include <cmath>
using namespace std;
const int N_MAX = 200;
int main (void) {
    int n;
    int a[N_MAX];
    int ans = 0;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    while (true) {
        for (int i = 0; i < n; i++) {
            if (a[i] % (int)pow(2, ans) != 0) {
                cout << ans - 1 << endl;
                return 0;
            }
        }
        ans++;
    }

    return 0;
}