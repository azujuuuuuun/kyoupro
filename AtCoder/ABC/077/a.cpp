#include <iostream>
using namespace std;
int main (void) {
    string c[2];

    cin >> c[0];
    cin >> c[1];

    if (c[0][0] == c[1][2] && c[0][1] == c[1][1] && c[0][2] == c[1][0]) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}