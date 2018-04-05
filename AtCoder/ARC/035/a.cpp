#include <iostream>
#include <algorithm>
using namespace std;
int main (void) {
    string s;

    cin >> s;

    string sr = s;
    reverse(sr.begin(), sr.end());

    bool is_palindrome = true;
    for (int i = 0, len = s.length(); i < len; i++) {
        if (s[i] == sr[i] || s[i] == '*' || sr[i] == '*') {
            continue;
        } else {
            is_palindrome = false;
        }
    }

    if (is_palindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
