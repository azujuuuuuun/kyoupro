#include <iostream>
#include <map>
using namespace std;
int main (void) {
    int N;
    map<string, int> mp;

    cin >> N;
    string s[N];
    for (int i = 0; i < N; i++) {
        cin >> s[i];
        auto itr = mp.find(s[i]);
        if (itr != mp.end()) {
            mp[s[i]]++;
        } else {
            mp[s[i]] = 1;
        }
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        string t;
        cin >> t;
        auto itr = mp.find(t);
        if (itr != mp.end()) {
            mp[t]--;
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans = max(ans, mp[s[i]]);
    }

    cout << ans << endl;

    return 0;
}