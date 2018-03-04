#include <iostream>
using namespace std;
typedef long long ll;
const int HW_MAX = 300;
const int A_MAX = HW_MAX * HW_MAX;
int main (void) {
    int H, W;
    int D;
    int px[A_MAX + 1], py[A_MAX + 1];
    ll d[A_MAX + 1];
    int Q;

    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> H >> W >> D;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int A;
            cin >> A;
            px[A] = j, py[A] = i;
        }
    }

    for (int i = 0; i <= H * W; i++) d[i] = 0;

    for (int i = D; i <= H * W; i++) {
        d[i] += d[i - D] + abs(px[i] - px[i - D]) + abs(py[i] - py[i - D]);
    }

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int L, R;
        cin >> L >> R;
        cout << d[R] - d[L] << endl;
    }

    return 0;
}