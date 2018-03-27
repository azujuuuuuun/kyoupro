#include <iostream>
using namespace std;
int main (void) {
    string s;

    cin >> s;
    int cnt[26] = {0};
    for (int i = 0; i < s.length(); i++) cnt[s[i] - 'a']++;

    int ma = 0;
    for (int i = 0; i < 26; i++) ma = max(ma, cnt[i]);

    if (ma == 1) cout << -1 << " " << -1 << endl;
    
    return 0;
}