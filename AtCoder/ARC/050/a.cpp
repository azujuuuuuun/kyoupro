#include <iostream>
#include <ctype.h>
using namespace std;
int main (void) {
    char C, c;

    cin >> C >> c;

    C = toupper(C);
    c = toupper(c);

    if (C == c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
