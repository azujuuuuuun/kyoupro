#include <iostream>
using namespace std;
const int HW_MAX = 50;
int main (void) {
    int H;
    int W;
    string S[HW_MAX];

    cin >> H >> W;
    for (int i = 0; i < H; i++) cin >> S[i];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '#') continue;
            int cnt = 0;
            for (int x = -1; x <= 1; x++) {
                for (int y = -1; y <= 1; y++) {
                    int nx = j + x;
                    int ny = i + y;
                    if (x == 0 && y == 0) continue;
                    if (0 <= nx && nx < W && 0 <= ny && ny < H) {
                        if (S[ny][nx] == '#') cnt++;
                    }
                }
            }
            S[i][j] = cnt + '0';
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << S[i][j];
        }
        cout << endl;
    }

    return 0;
}