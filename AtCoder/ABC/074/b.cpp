#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int N;
    int K;
    int ans = 0;

    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        ans += 2 * min(x, K - x);
    }

    cout << ans << endl;

    return 0;
}