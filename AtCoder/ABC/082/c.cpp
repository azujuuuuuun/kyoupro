#include <iostream>
#include <map>
using namespace std;
int main (void) {
    int N;

    cin >> N;

    map<int, int> mp;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        auto itr = mp.find(a);
        if( itr != mp.end() ) {
            mp[a]++;
        } else {
            mp[a] = 1;
        }
    }

    int ans = 0;
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        if (itr->first < itr->second) {
            ans += itr->second - itr->first;
        } else if (itr->first > itr->second) {
            ans += itr->second;
        }
    }

    cout << ans << endl;

    return 0;
}
