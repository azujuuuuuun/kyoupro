#include <iostream>
using namespace std;
int main (void) {
    int N;
    string s, t;

    cin >> N;
    cin >> s;
    cin >> t;

    int ans = 2 * N;
    for (int i = 0, slen = s.length(); i <= slen; i++) {
        string st = s.substr(0, slen - i) + t;
        if (st.substr(0, slen) == s) {
            ans = st.length();
        }
    }

    cout << ans << endl;

    return 0;
}
