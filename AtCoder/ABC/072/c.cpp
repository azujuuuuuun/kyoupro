#include <iostream>
#include <cmath>
using namespace std;
const int N_MAX = pow(10, 5);
int main (void) {
    int N;
    int cnt[N_MAX] = {0};
    int ans = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        cnt[a - 1]++;
        cnt[a]++;
        cnt[a + 1]++;
    }

    for (int i = 0; i < N_MAX; i++) ans = max(ans, cnt[i]);

    cout << ans << endl;

    return 0;
}