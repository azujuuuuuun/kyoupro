#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
typedef long long ll;
struct Product {
    ll c;
    ll v;
};
const int N_MAX = 19;
vector<Product> p;
ll ma;
void dfs (int i, ll money, ll sum) {
    if (i >= p.size()) {
        ma = max(ma, sum);
        return ;
    }
    dfs(i + 1, money, sum);
    if (money >= p[i].c) dfs(i + 1, money - p[i].c, sum + p[i].v);
}
int main (void) {
    int n;
    ll x[N_MAX];
    ll money = 0;
    ll ans = 0;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) {
        Product pi;
        cin >> pi.c;
        p.push_back(pi);
    }
    for (int i = 0; i < n; i++) cin >> p[i].v;

    int i = 0;
    while (p.size() != 0) {
        if (i > 0){
            ma = 0;
            dfs(0, money, 0);
            ans = max(ans, ma);
        }
        money += x[i++];
        ll minv = LLONG_MAX;
        ll c;
        ll v;
        for (int cnt = 0; cnt < p.size(); cnt++) {
            ma = 0;
            Product pi;
            pi.c = p[0].c;
            pi.v = p[0].v;
            p.erase(p.begin() + 0);
            dfs(0, money, 0);
            if (minv > ma) {
                minv = ma;
                c = pi.c;
                v = pi.v;
            }
            p.push_back(pi);
        }
        int idx = 0;
        for (int j = 0; j < p.size(); j++) {
            if (p[j].c == c && p[j].v == v) {
                idx = j;
            }
        }
        p.erase(p.begin() + idx);
    }

    cout << ans << endl;

    return 0;
}
