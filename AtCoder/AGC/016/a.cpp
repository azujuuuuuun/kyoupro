#include <iostream>
#include <climits>
using namespace std;
int main (void) {
    string s;

    cin >> s;

    int ans = INT_MAX;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        int cnt = 0;
        string ss = s;
        while (true) {
            int len = ss.length();
            bool end = true;
            for (int j = 0; j < len; j++) {
                if (ss[j] != c) {
                    end = false;
                }
            }
            if (end) {
                break;
            }

            for (int j = 0; j < len; j++) {
                if (j == len - 1) {
                    ss.pop_back();
                } else {
                    if (ss[j + 1] == c) {
                        ss[j] = c;
                    }
                }
            }
            cnt++;
        }
        ans = min(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}
