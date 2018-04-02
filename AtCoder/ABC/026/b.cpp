#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    int R[N];
    for (int i = 0; i < N; i++) {
        cin >> R[i];
    }

    sort(R, R + N, greater<int>());
    double ans = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            ans += R[i] * R[i];
        } else {
            ans -= R[i] * R[i];
        }
    }
    ans *= M_PI;

    printf("%.10f\n", ans);

    return 0;
}