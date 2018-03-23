#include <iostream>
using namespace std;
int main (void) {
    int N;
    string S;

    cin >> N;
    cin >> S;

    int ans = 0;
    string s = "b";
    while (true) {
        if (s == S) {
            cout << ans << endl;
            return 0;
        } else if (s.length() >= N) {
            cout << -1 << endl;
            return 0;
        }

        ans++;
        if (ans % 3 == 0) {
            s = "b" + s + "b";
        } else if (ans % 3 == 1) {
            s = "a" + s + "c";
        } else {
            s = "c" + s + "a";
        }
    }
}