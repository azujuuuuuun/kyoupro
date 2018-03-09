#include <iostream>
using namespace std;
int main (void) {
    char a, b;

    cin >> a >> b;

    if (a == 'H') cout << b << endl;
    else {
        if (b == 'H') cout << 'D' << endl;
        else cout << 'H' << endl;
    }

    return 0;
}