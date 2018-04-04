#include <iostream>
#include <cmath>
using namespace std;
int f (int y, int m, int d) {
    double dy = (double)y;
    double dm = (double)m;
    return 365 * y + floor(dy / 4) - floor(dy / 100) + floor(dy / 400) + floor(306 * (dm + 1) / 10) + d - 429;
}
int main (void) {
    int y;
    int m;
    int d;

    cin >> y >> m >> d;

    if (m == 1 || m == 2) {
        y--;
        m += 12;
    }

    cout << f(2014, 5, 17) - f(y, m, d) << endl;

    return 0;
}