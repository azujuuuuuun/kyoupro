#include <iostream>
using namespace std;
int main (void) {
    string s;

    cin >> s;

    if (s[0] == 'y' && s[1] == 'a' && s[2] == 'h' && s[3] == s[4]) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}