#include <iostream>
using namespace std;
int main (void) {
    int A, B;
    int C, D;
    int E;
    int F;

    cin >> A >> B >> C >> D >> E >> F;

    int ans_sw = A * 100;
    int ans_s = 0;
    double ma = 0;
    for (int a = 0; a <= F / (A * 100); a++) {
        for (int b = 0; b <= F / (B * 100); b++) {
            for (int c = 0; c <= F / C; c++) {
                for (int d = 0; d <= F / D; d++) {
                    if (a == 0 && b == 0) {
                        continue;
                    }
                    int w = 100 * A * a + 100 * B * b;
                    int s = C * c + D * d;
                    int sw = s + w;
                    if (s > w / 100 * E) {
                        continue;
                    } else if (sw > F) {
                        continue;
                    } else {
                        double p = (double)100 * s / sw;
                        if (p > ma) {
                            ma = p;
                            ans_sw = sw;
                            ans_s = s;
                        }
                    }
                }
            }
        }
    }

    cout << ans_sw << " " << ans_s << endl;

    return 0;
}
