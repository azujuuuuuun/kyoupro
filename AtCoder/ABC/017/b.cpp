#include <iostream>
using namespace std;
int main (void) {
    string X;

    cin >> X;

    bool ans = true;
    int i = 0;
    while (i < X.length()) {
        if (X[i] == 'o' || X[i] == 'k' || X[i] == 'u') {
            i++;
        } else if (X[i] == 'c' && X[i + 1] == 'h') {
            i += 2;
        } else {
            ans = false;
            break;
        }
    }

    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}