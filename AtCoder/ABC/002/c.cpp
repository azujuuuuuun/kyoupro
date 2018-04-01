#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
const int N = 3;
int main (void) {
    double x[N], y[N];

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 1; i < N; i++) {
        x[i] -= x[0];
        y[i] -= y[0];
    }
    double ans = abs(x[1] * y[2] - y[1] * x[2]) / 2;

    printf("%.1f\n", ans);

    return 0;
}