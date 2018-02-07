#include <iostream>
using namespace std;
int main (void) {
    int a;
    int b;
    string s;

    cin >> a >> b;
    cin >> s;

    if (s.size() != a + b + 1) {
        cout << "No" << endl;
        return 0;
    }

    if (s[a] != '-') {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < s.size(); i++) {
        if (i == a) continue;
        if (!('0' <= s[i] && s[i] <= '9')) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    
    return 0;
}