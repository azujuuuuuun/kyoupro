#include <iostream>
using namespace std;
int main (void) {
    int n;
    int nx = 0;
    int ny = 0;
    int nt = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        int x;
        int y;
        cin >> t >> x >> y;
        int diff = (t - nt) - (abs(x - nx) + abs(y - ny));
        if (diff < 0 || diff % 2 != 0) {
            cout << "No" << endl;
            return 0;
        }
        nt = t;
        nx = x;
        ny = y;
    }

    cout << "Yes" << endl;

    return 0;
}