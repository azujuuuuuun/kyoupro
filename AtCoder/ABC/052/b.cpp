#include <iostream>
using namespace std;
int main (void) {
    int N;
    string S;

    cin >> N;
    cin >> S;

    int x = 0;
    int ans = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'I') x++;
        else x--;
        ans = max(ans, x);
    }

    cout << ans << endl;

    return 0;
}