#include <iostream>
using namespace std;
int main (void) {
    string S;

    cin >> S;

    int cnt = 0;
    for (int i = 0, len = S.length(); i < len; i++) {
        if (S[i] == 'o') {
            cnt++;
        }
    }
    int ans = 700 + 100 * cnt;

    cout << ans << endl;
    
    return 0;
}
