#include <iostream>
#include <cmath>
using namespace std;
const int AB_MAX = pow(10, 6);
int s[AB_MAX + 1] = {0};
int main (void) {
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        s[a]++;
        s[b + 1]--;
    }

    for (int i = 0; i < AB_MAX; i++) {
        s[i + 1] += s[i];
    }

    int ans = 0;
    for (int i = 0; i <= AB_MAX; i++) {
        ans = max(ans, s[i]);
    }

    cout << ans << endl;

    return 0;
}
