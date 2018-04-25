#include <iostream>
using namespace std;
int main (void) {
    string S;

    cin >> S;

    int d[4] = {0};
    for (int i = 0, len = S.length(); i < len; i++) {
        if (S[i] == 'N') {
            d[0] = 1;
        } else if (S[i] == 'W') {
            d[1] = 1;
        } else if (S[i] == 'S') {
            d[2] = 1;
        } else {
            d[3] = 1;
        }
    }

    if ((d[0] && !d[1] && d[2] && !d[3]) || (!d[0] && d[1] && !d[2] && d[3]) || (d[0] && d[1] && d[2] && d[3])) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
