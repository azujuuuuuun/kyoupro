#include <iostream>
using namespace std;
int main (void) {
    string S[12];

    for (int i = 0; i < 12; i++) cin >> S[i];

    int ans = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < S[i].length(); j++) {
            if (S[i][j] == 'r') {
                ans++;
                break;
            }
        }
    }
    
    cout << ans << endl;

    return 0;
}