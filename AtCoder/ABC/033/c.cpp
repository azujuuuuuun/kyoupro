#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    string S;

    cin >> S;

    int i = 0;
    int ans = 0;
    ll sum = 1;
    while (i < S.length()) {
        if (S[i] == '+') {
            if (sum != 0) ans++;
            sum = 1;
        } else if (S[i] == '*') {
            if (sum == 1) sum *= S[i + 1];
            else sum *= S[i - 1] * S[i + 1];
        }
        i++;
    }
    cout << ans << endl;

    return 0;
}