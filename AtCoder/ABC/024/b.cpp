#include <iostream>
using namespace std;
int main (void) {
    int N;
    int T;

    cin >> N >> T;
    int ans = 0;
    int now = 0;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if (i != 0) {
            if (A < now + T) {
                ans += A - now;
            } else {
                ans += T;
            }
        }
        now = A;
    }
    ans += T;

    cout << ans << endl;

    return 0;
}