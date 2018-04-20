#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    vector<pair<int, int> > r;
    vector<pair<int, int> > b;
    for (int i = 0; i < N; i++) {
        int ai, bi;
        cin >> ai >> bi;
        r.push_back(make_pair(-bi, ai));
    }
    for (int i = 0; i < N; i++) {
        int ci, di;
        cin >> ci >> di;
        b.push_back(make_pair(ci, di));
    }

    sort(r.begin(), r.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < N; i++) {
        int tmp = -r[i].first;
        r[i].first = r[i].second;
        r[i].second = tmp;
    }

    bool rp[N];
    bool bp[N];
    for (int i = 0; i < N; i++) {
        rp[i] = false;
        bp[i] = false;
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (rp[j]) {
                continue;
            }
            if (bp[i]) {
                break;
            }
            if (b[i].first > r[j].first && b[i].second > r[j].second) {
                rp[j] = true;
                bp[i] = true;
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
