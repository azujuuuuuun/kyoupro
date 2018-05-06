#include <iostream>
#include <algorithm>
using namespace std;
int main (void) {
    string S;

    cin >> S;

    if (S == "zyxwvutsrqponmlkjihgfedcba") {
        cout << -1 << endl;
        return 0;
    }

    int alphabet[26] = {0};
    for (int i = 0, len = S.length(); i < len; i++) {
        alphabet[S[i] - 'a']++;
    }

    if (S.length() != 26) {
        cout << S;
        for (int i = 0; i < 26; i++) {
            if (alphabet[i] == 0) {
                char c = i + 'a';
                cout << c << endl;
                return 0;
            }
        }
    } else {
        string s = S;
        next_permutation(s.begin(), s.end());
        for (int i = 0, len = S.length(); i < len; i++) {
            cout << s[i];
            if (s[i] != S[i]) {
                cout << endl;
                return 0;
            }
        }
    }
}
