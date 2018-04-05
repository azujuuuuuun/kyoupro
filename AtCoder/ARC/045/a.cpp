#include <iostream>
using namespace std;
int main (void) {
    string S;
    int i = 0;
    while (cin >> S) {
        if (i > 0) {
            cout << ' ';
        }
        if (S == "Left") {
            cout << '<';
        } else if (S == "Right") {
            cout << '>';
        } else {
            cout << 'A';
        }
        i++;
    }
    cout << endl;
    return 0;
}
