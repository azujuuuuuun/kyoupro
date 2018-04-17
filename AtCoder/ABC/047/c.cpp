#include <iostream>
using namespace std;
int main (void) {
    string S;
    cin >> S;

    char c = S[0];
    int ans = 0;
    for (int i = 1, len = S.length(); i < len; i++) {
        if (S[i] != c) {
            ans++;
            c = S[i];
        }
    }

    cout << ans << endl;

    return 0;
}
