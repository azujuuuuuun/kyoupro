#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
const int N_MAX = pow(10, 5);
int main (void) {
    int N;
    int A[N_MAX] = {0};

    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        a--;
        A[a]++;
    }

    int cnt = 0;
    for (int i = 0; i < N_MAX; i++) {
        if (A[i] > 0) cnt += A[i] - 1;
    }
    int ans = cnt % 2 == 0 ? N - cnt : N - cnt - 1;

    cout << ans << endl;

    return 0;
}