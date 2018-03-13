#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    string S;
    int T;

    cin >> S >> T;

    int x = 0;
    int y = 0;
    int cnt = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'L') x--;
        else if (S[i] == 'R') x++;
        else if (S[i] == 'U') y++;
        else if (S[i] == 'D') y--;
        else if (S[i] == '?') cnt++;
    }

    int ans = abs(x) + abs(y);
    if (T == 1) ans += cnt;
    else {
        int tmp = S.length() % 2;
        ans = max(tmp, ans - cnt);
    }
    cout << ans << endl;

    return 0;
}