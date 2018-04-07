#include <iostream>
#include <algorithm>
using namespace std;
const int N = 3;
int main (void) {
    int n[N];

    for (int i = 0; i < N; i++) {
        cin >> n[i];
    }

    int ans = 0;
    while (true) {
        if (n[0] == n[1] && n[1] == n[2]) {
            break;
        }
        ans++;
        sort(n, n + N);
        if (n[2] - n[0] >= 2) {
            n[0] += 2;
        } else {
            n[0]++;
            n[1]++;
        }
    }

    cout << ans << endl;
    return 0;
}
