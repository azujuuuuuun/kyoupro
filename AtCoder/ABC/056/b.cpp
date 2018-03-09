#include <iostream>
using namespace std;
int main (void) {
    int W;
    int a, b;

    cin >> W >> a >> b;

    if (a <= b) cout << max(0, b - (a + W)) << endl;
    else cout << max(0, a - (b + W)) << endl;

    return 0;
}