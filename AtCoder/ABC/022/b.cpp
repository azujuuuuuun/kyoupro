#include <iostream>
#include <cmath>
using namespace std;
const int A_MAX = pow(10, 5);
int main (void) {
    int N;

    cin >> N;

    int n[A_MAX] = {0};

    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        A--;
        n[A]++;
    }

    int ans = 0;
    for (int i = 0; i < A_MAX; i++) {
        if (n[i] >= 2) ans += n[i] - 1;
    }

    cout << ans << endl;

    return 0;
}