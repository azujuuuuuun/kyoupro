#include <iostream>
using namespace std;
int main (void) {
    string s[3];

    for (int i = 0; i < 3; i++) cin >> s[i];

    for (int i = 0; i < 3; i++) cout << s[i][0];
    cout << endl;

    return 0;
}