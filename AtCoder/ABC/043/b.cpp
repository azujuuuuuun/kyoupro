#include <iostream>
using namespace std;
int main (void) {
    string s;

    cin >> s;

    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') ans.push_back('0');
        else if (s[i] == '1') ans.push_back('1');
        else if (s[i] == 'B') {
            if (ans != "") ans.pop_back();
        }
    }

    cout << ans << endl;

    return 0;
}