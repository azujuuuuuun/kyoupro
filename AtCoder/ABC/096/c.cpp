#include <iostream>
using namespace std;
const int H_MAX = 50;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, -1, 0, 1};
int H, W;
string s[H_MAX];
void dfs (int y, int x) {
    for (int d = 0; d < 4; d++) {
        int ny = y + dy[d];
        int nx = x + dx[d];
        if (0 <= ny && ny < H && 0 <= nx && nx < W && s[ny][nx] == '#') {
            s[y][x] = '.';
            s[ny][nx] = '.';
            dfs(ny, nx);
        }
    }
}
int main (void) {

    cin >> H >> W;
    for (int i = 0; i < H; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (s[i][j] == '#') {
                dfs(i, j);
            }
        }
    }

    bool flag = true;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (s[i][j] == '#') {
                flag = false;
            }
        }
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
