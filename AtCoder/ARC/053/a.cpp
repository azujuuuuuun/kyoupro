#include <iostream>
using namespace std;
int dy[] = {0, 1};
int dx[] = {1, 0};
int main (void) {
    int H, W;

    cin >> H >> W;

    int ans = 0;
    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            for (int d = 0; d < 2; d++) {
                int ny = y + dy[d];
                int nx = x + dx[d];
                if (ny < H && nx < W) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}
