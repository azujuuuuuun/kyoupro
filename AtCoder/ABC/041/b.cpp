#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
const int D = pow(10, 9) + 7;
int main (void) {
    ll A, B, C;

    cin >> A >> B >> C;

    cout << (((A * B) % D) * C) % D << endl;

    return 0;
}