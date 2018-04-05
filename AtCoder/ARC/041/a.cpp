#include <iostream>
using namespace std;
int main (void) {
    int x;
    int y;
    int k;

    cin >> x >> y;
    cin >> k;

    if (k <= y) {
        cout << x + k << endl;
    } else {
        cout << y + x - (k - y) << endl;
    }

    return 0;
}
