#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int x;
    int a;
    int b;

    cin >> x >> a >> b;

    if (abs(a - x) < abs(b - x)) cout << "A" << endl;
    else cout << "B" << endl;
    
    return 0;
}