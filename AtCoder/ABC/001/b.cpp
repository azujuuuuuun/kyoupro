#include <iostream>
using namespace std;
int main (void) {
    int m;

    cin >> m;

    double km = (double)m / 1000;
    int ans;
    if (km < 0.1) {
        cout << "00" << endl;
    } else if (km <= 5) {
        ans = km * 10;
        if (ans / 10 < 1) {
            cout << "0";
        }
        cout << ans << endl;
    } else if (6 <= km && km <= 30) {
        ans = km + 50;
        cout << ans << endl;
    } else if (35 <= km && km <= 70) {
        ans = (km - 30) / 5 + 80;
        cout << ans << endl;
    } else {
        ans = 89;
        cout << ans << endl;
    }

    return 0;
}