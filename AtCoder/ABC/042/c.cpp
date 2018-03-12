#include <iostream>
using namespace std;
int main (void) {
    int N;
    int K;

    cin >> N >> K;
    int D[K];
    for (int i = 0; i < K; i++) cin >> D[i];

    int ans = N;
    while (true) {
        bool end = true;
        int tmp = ans;
        while (tmp >= 1) {
            int n = tmp % 10;
            for (int i = 0; i < K; i++) {
                if (n == D[i]) end = false;
            }
            tmp /= 10;
        }
        if (end) break;
        ans++;
    }

    cout << ans << endl;

    return 0;
}