#include <iostream>
#include <cstdio>
using namespace std;
int main (void) {
    int n;
    int m;

    cin >> n >> m;

    double m_angle = m * 6;
    double h_angle = (n % 12) * 30 + (double)m / 2;

    double ans = max(h_angle, m_angle) - min(h_angle, m_angle);
    ans = min(ans, 360 - ans);

    printf("%.4f\n", ans);

    return 0;
}