#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main (void) {
    int N;
    int K;

    cin >> N >> K;
    double R[N];
    for (int i = 0; i < N; i++) {
        cin >> R[i];
    }

    sort(R, R + N);
    double ans = 0;
    for (int i = 1; i <= K; i++) {
        ans = (ans + R[N - 1 - K + i]) / 2;
    }

    printf("%.9f\n", ans);

    return 0;
}