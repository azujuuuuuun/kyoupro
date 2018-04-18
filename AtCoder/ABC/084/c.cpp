#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    int C[N - 1];
    int S[N - 1];
    int F[N - 1];
    for (int i = 0; i < N - 1; i++) {
        cin >> C[i] >> S[i] >> F[i];
    }

    for (int i = 0; i < N - 1; i++) {
        int ans = S[i] + C[i];
        for (int j = i + 1; j < N - 1; j++) {
            if (ans <= S[j]) {
                ans = S[j];
            } else {
                int tmp = S[j];
                while (tmp < ans) {
                    tmp += F[j];
                }
                ans = tmp;
            }
            ans += C[j];
        }
        cout << ans << endl;
    }
    cout << 0 << endl;

    return 0;
}
