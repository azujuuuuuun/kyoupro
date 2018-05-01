#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int ans = 1;
    int p = 0;
    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            continue;
        }
        if (p == 0) {
            if (A[i] < A[i + 1]) {
                p = 1;
            } else if (A[i] > A[i + 1]) {
                p = -1;
            }
        } else if (p == 1) {
            if (A[i] > A[i + 1]) {
                p = 0;
                ans++;
            }
        } else {
            if (A[i] < A[i + 1]) {
                p = 0;
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
