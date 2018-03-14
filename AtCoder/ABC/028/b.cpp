#include <iostream>
using namespace std;
int main (void) {
    string S;

    cin >> S;
    int cnt[6] = {0};
    for (int i = 0; i < S.length(); i++) {
        cnt[S[i] - 'A']++;
    }

    for (int i = 0; i < 6; i++) {
        if (i == 5) cout << cnt[i];
        else cout << cnt[i] << " ";
    }
    cout << endl;
    
    return 0;
}