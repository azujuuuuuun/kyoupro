#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int a, b, c;
    int d;

    cin >> a >> b >> c >> d;

    if (abs(c - a) <= d || (abs(b - a) <= d && abs(c - b) <= d)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
