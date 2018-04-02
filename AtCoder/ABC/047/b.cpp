#include <iostream>
using namespace std;
int main (void) {
    int W, H;
    int N;

    cin >> W >> H >> N;

    int x0 = 0;
    int y0 = 0;
    int x1 = W;
    int y1 = H;
    for (int i = 0; i < N; i++) {
        int x, y;
        int a;
        cin >> x >> y >> a;
        if (a == 1) {
            x0 = max(x0, x);
        } else if (a == 2) {
            x1 = min(x1, x);
        } else if (a == 3) {
            y0 = max(y0, y);
        } else {
            y1 = min(y1, y);
        }
    }

    if (x1 - x0 > 0 && y1 - y0 > 0) {
        cout << (y1 - y0) * (x1 - x0) << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}