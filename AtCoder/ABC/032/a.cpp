#include <iostream>
using namespace std;
int main (void) {
    int a, b;
    int n;

    cin >> a >> b >> n;

    int ans = n;
    while (true) {
        if (ans % a == 0 && ans % b == 0) break;
        ans++;
    }

    cout << ans << endl;

    return 0;
}