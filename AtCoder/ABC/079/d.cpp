#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
const int HW_MAX = 200;
const int C_NUM = 10;
int main (void) {
    int H;
    int W;
    int c[C_NUM][C_NUM];
    int A[HW_MAX][HW_MAX];

    cin >> H >> W;
    for (int i = 0; i < C_NUM; i++) {
        for (int j = 0; j < C_NUM; j++) {
            cin >> c[i][j];
        }
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }

    for (int k = 0; k < C_NUM; k++) {
        for (int i = 0; i < C_NUM; i++) {
            for (int j = 0; j < C_NUM; j++) {
                c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (A[i][j] != -1) ans += c[A[i][j]][1];
        }
    }

    cout << ans << endl;
    
    return 0;
}