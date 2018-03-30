#include <iostream>
#include <map>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    string S[N];
    map<string, int> mp;
    for (int i = 0; i < N; i++) {
        cin >> S[i];
        auto itr = mp.find(S[i]);
        if (itr != mp.end()) {
            mp[S[i]]++;
        } else {
            mp[S[i]] = 1;
        }
    }

    int ma = 0;
    string ans = "";
    for (int i = 0; i < N; i++) {
        if (mp[S[i]] > ma) {
            ma = mp[S[i]];
            ans = S[i];
        }
    }

    cout << ans << endl;

    return 0;
}