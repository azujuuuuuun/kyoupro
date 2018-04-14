#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    int N;
    int M;
    ll X;
    ll Y;

    cin >> N >> M;
    cin >> X >> Y;
    ll a[N];
    ll b[M];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> b[i];
    }

    int ans = 0;
    ll now = 0;
    int ai = 0;
    int bi = 0;
    while (true) {
        if (ai >= N) break;
        while (now > a[ai]) {
            ai++;
            if (ai >= N) break;
        }
        if (ai >= N) break;
        now = a[ai++] + X;
        if (bi >= M) break;
        while (now > b[bi]) {
            bi++;
            if (bi >= M) break;
        }
        if (bi >= M) break;
        now = b[bi++] + Y;
        ans++;
    }

    cout << ans << endl;

    return 0;
}
