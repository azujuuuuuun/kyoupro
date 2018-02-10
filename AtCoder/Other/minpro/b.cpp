#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int x;
    int k;
    int y;

    cin >> x >> k;

    y = x + 1;

    if (y % (int)pow(10, k) == 0) cout << y << endl;
    else {
        int q = y / (int)pow(10, k);
        q++;
        cout << q * (int)pow(10, k) << endl;
    }
    
    return 0;
}