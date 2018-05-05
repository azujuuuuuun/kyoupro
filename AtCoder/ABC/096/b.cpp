#include <iostream>
using namespace std;
typedef long long ll;
ll n[3];
int K;
ll ans = 0;
void dfs (int i) {
    if (i == K) {
        ans = max(ans, n[0] + n[1] + n[2]);
        return ;
    }
    for (int j = 0; j < 3; j++) {
        n[j] *= 2;
        dfs(i + 1);
        n[j] /= 2;
    }
}
int main (void) {
    for (int i = 0; i < 3; i++) {
        cin >> n[i];
    }
    cin >> K;

    dfs(0);

    cout << ans << endl;

    return 0;
}
