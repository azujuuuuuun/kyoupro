#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int a;
    int b;
    double x;

    cin >> a >> b;

    x = (double)(a + b) / 2;

    cout << (int)ceil(x) << endl;

    return 0;
}