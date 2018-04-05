#include <iostream>
#include <cstdio>
using namespace std;
int main (void) {
    int N;

    cin >> N;

    double ans = 0;
    for (int i = 0; i < N; i++) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        double score = a + b + c + d + (double)e * 110 / 900;
        ans = max(ans, score);
    }

    printf("%.13f\n", ans);

    return 0;
}
