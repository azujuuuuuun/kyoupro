#include <iostream>
#include <queue>
#include <climits>
using namespace std;
const int R_MAX = 50;
const int INF = INT_MAX / 3;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, -1, 0, 1};
int R, C;
int gy, gx;
string c[R_MAX];
int mi[R_MAX][R_MAX];
int bfs(int sy, int sx) {
    queue<pair<int, int> > q;
    q.push(make_pair(sy, sx));
    mi[sy][sx] = 0;
    while (!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        int y = p.first;
        int x = p.second;
        for (int d = 0; d < 4; d++) {
            int ny = y + dy[d];
            int nx = x + dx[d];
            if (0 <= ny && ny < R && 0 <= nx && nx < C && c[ny][nx] == '.') {
                if (ny == gy && nx == gx) {
                    return mi[ny][nx] = min(mi[ny][nx], mi[y][x] + 1);
                } else if (mi[y][x] + 1 < mi[ny][nx]){
                    mi[ny][nx] = mi[y][x] + 1;
                    q.push(make_pair(ny, nx));
                }
            }
        }
    }
}
int main (void) {
    int sy, sx;
    cin >> R >> C;
    cin >> sy >> sx;
    sy--;
    sx--;
    cin >> gy >> gx;
    gy--;
    gx--;
    for (int i = 0; i < R; i++) {
        cin >> c[i];
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            mi[i][j] = INF;
        }
    }

    cout << bfs(sy, sx) << endl;

    return 0;
}
