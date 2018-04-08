#include <iostream>
#include <algorithm>
using namespace std;
int main (void) {
    int N;
    int K;

    cin >> N >> K;
    int cnt[N + 1] = {0};
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        cnt[A]++;
    }

    sort(cnt, cnt + N, greater<int>());
    int ans = N;
    for (int i = 0; i < K; i++) {
        ans -= cnt[i];
    }

    cout << ans << endl;

    return 0;
}
