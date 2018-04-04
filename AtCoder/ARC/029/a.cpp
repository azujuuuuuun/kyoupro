#include <iostream>
#include <climits>
using namespace std;
const int N_MAX = 4;
int N;
int t[N_MAX];
int ans = INT_MAX;
void dfs(int i, int sum1, int sum2) {
    if (i >= N) {
        ans = min(ans, max(sum1, sum2));
    } else {
        dfs(i + 1, sum1 + t[i], sum2);
        dfs(i + 1, sum1, sum2 + t[i]);
    }
}
int main (void) {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> t[i];
    }

    dfs(0, 0, 0);

    cout << ans << endl;

    return 0;
}