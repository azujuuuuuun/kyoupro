#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int X;
    int t;

    cin >> X >> t;

    cout << max(0, X - t) << endl;

    return 0;
}