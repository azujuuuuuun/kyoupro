#include <iostream>
#include <cmath>
using namespace std;
double d(int x1, int y1, int x2, int y2) {
    return pow(x2 - x1, 2) + pow(y2 - y1, 2);
}
int main (void) {
    int x1, y1, r;
    int x2, y2, x3, y3;

    cin >> x1 >> y1 >> r;
    cin >> x2 >> y2 >> x3 >> y3;

    if (x2 <= x1 - r && x1 + r <= x3 && y2 <= y1 - r && y1 + r <= y3) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    double d1 = d(x1, y1, x2, y2);
    double d2 = d(x1, y1, x2, y3);
    double d3 = d(x1, y1, x3, y2);
    double d4 = d(x1, y1, x3, y3);
    double rr = pow(r, 2);
    if (d1 > rr || d2 > rr || d3 > rr || d4 > rr) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
