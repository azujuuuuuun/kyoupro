#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
const int N_MAX = pow(10, 5);
typedef long long ll;
int main (void) {
    int N;
    ll K;
    vector<pair<int, int> > v;

    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        int a;
        int b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end());

    ll cnt = 0;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        cnt += v[i].second;
        if (cnt >= K) {
            ans = v[i].first;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}