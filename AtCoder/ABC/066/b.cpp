#include <iostream>
using namespace std;
int main (void) {
    string s;
    int len;

    cin >> s;

    len = s.length();

    while (true) {
        len--;
        if (len % 2 == 1) continue;
        bool even = true;
        for (int i = 0; i < len / 2; i++) {
            if (s[i] != s[len / 2 + i]) even = false;
        }
        if (even) {
            cout << len << endl;
            return 0;
        }
    }
}