#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int a;
    int b;

    cin >> a;
    cin >> b;

    cout << min(min(abs(a - b), abs(a) + abs(b - 10)), abs(a - 10) + abs(b)) << endl;

    return 0;
}