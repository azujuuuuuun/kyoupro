#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main (void) {
    ll N;
    ll C;
    ll K;

    cin >> N >> C >> K;
    ll T[N];
    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }

    sort(T, T + N);
    int ans = 1;
    ll now = T[0];
    int cnt = 1;
    for (int i = 1; i < N; i++) {
        if (T[i] - now > K || cnt >= C) {
            ans++;
            now = T[i];
            cnt = 1;
        } else {
            cnt++;
        }
    }

    cout << ans << endl;

    return 0;
}
