#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main (void) {
    int N;

    cin >> N;

    int x[N], y[N];
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    double ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            ans = max(ans, sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2)));
        }
    }

    printf("%.6f\n", ans);

    return 0;
}