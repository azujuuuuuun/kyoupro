#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;
const ll MOD = pow(10, 9) + 7;
int main (void) {
    int N;

    cin >> N;

    vector<pair<int, int> > v;
    for (int i = 2; i <= N; i++) {
        int cnt = 0;
        for (int j = 2; j <= i; j++) {
            if (i % j == 0) {
                cnt++;
            }
        }
        if (cnt == 1) {
            v.push_back(make_pair(i, 0));
        }
    }


    for (int i = 1; i <= N; i++) {
        for (int j = 0, size = v.size(); j < size; j++) {
            int tmp = i;
            while (tmp % v[j].first == 0) {
                v[j].second++;
                tmp /= v[j].first;
            }
        }
    }

    ll ans = 1;
    for (int i = 0, size = v.size(); i < size; i++) {
        ans = ans * (v[i].second + 1) % MOD;
    }

    cout << ans << endl;

    return 0;
}
