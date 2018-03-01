#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int N;
    int ans = 0;

    cin >> N;

    for (int i = 0; pow(2, i) <= 100; i++) {
        if (pow(2, i) <= N) ans = pow(2, i);
        else break;
    }

    cout << ans << endl;

    return 0;
}