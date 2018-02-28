#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
const int N_MAX = pow(10, 5);
int main (void) {
    int N;
    int A[N_MAX];

    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A, A + N);

    int ans = 0;
    int cnt = 1;
    for (int i = 0; i < N; i++) {
        if (A[i] == A[i + 1]) cnt++;
        else {
            ans += cnt % 2;
            cnt = 1;
        }
    }

    cout << ans << endl;

    return 0;
}