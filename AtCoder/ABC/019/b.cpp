#include <iostream>
using namespace std;
int main (void) {
    string s;

    cin >> s;

    char c = s[0];
    int cnt = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == c) {
            cnt++;
        } else {
            cout << c << cnt;
            c = s[i];
            cnt = 1;
        }
    }
    cout << c << cnt << endl;

    return 0;
}