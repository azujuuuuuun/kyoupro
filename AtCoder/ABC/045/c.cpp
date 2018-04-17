#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
ll ans = 0;
void dfs (string S, int i) {
    if (i >= S.length() - 1) {
        int begin = 0;
        for (int j = 1, len = S.length(); j < len; j++) {
            if (S[j] == '+' || j == len - 1) {
                ans += stol(S.substr(begin, j - begin + 1));
                begin = j;
            }
        }
    } else {
        dfs(S, i + 1);
        S.insert(S.begin() + i + 1, '+');
        dfs(S, i + 2);
    }
}
int main (void) {
    string S;

    cin >> S;

    if (S.length() == 1) {
        cout << S << endl;
        return 0;
    }
    
    dfs(S, 0);

    cout << ans << endl;

    return 0;
}
