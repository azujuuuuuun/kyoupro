#include <iostream>
using namespace std;
int main (void) {
    string s;

    cin >> s;

    for (int i = 0, len = s.length(); i < len - 1; i++) {
        if (s[i] == s[i + 1]) {
            cout << i + 1 << " " << i + 2 << endl;
            return 0;
        } else if (i + 2 <= len - 1 && s[i] == s[i + 2]) {
            cout << i + 1 << " " << i + 3 << endl;
            return 0;
        }
    }

    cout << "-1 -1" << endl;

    return 0;
}
