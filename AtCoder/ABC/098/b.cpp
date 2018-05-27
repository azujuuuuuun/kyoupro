#include <iostream>
using namespace std;
int main (void) {
    int N;
    string S;

    cin >> N;
    cin >> S;

    int ans = 0;
    for (int i = 1; i < N; i++) {
        string X = S.substr(0, i);
        string Y = S.substr(i, N - i);
        int xInclude[26] = {0};
        int yInclude[26] = {0};
        for (int j = 0, len = X.length(); j < len; j++) {
            xInclude[X[j] - 'a']++;
        }
        for (int j = 0, len = Y.length(); j < len; j++) {
            yInclude[Y[j] - 'a']++;
        }
        int cnt = 0;
        for (int j = 0; j < 26; j++) {
            if (xInclude[j] && yInclude[j]) {
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}
