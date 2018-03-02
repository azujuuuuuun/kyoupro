#include <iostream>
#include <algorithm>
using namespace std;
const int N_MAX = 100;
int main (void) {
    int N;
    int s[N_MAX];
    int ans = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> s[i];
        ans += s[i];
    }

    sort(s, s + N);

    if (ans % 10 == 0) {
        for (int i = 0; i < N; i++) {
            if (s[i] % 10 != 0) {
                cout << ans - s[i] << endl;
                return 0;
            }
        }
        cout << 0 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}