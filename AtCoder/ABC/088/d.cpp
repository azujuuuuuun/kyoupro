#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
int dx[] = {0, -1, 0, 1};
int dy[] = {-1, 0, 1, 0};
const int limit = 50;
int h;
int w;
string s[limit];
int ans = 0;
bool can_goal = false;
bool visited[limit][limit];
struct Node {
  int x;
  int y;
  int cnt;
};
void bfs (int sx, int sy) {
  queue<node> q;
  Node n;
  n.x = sx;
  n.y = sy;
  n.cnt = 1;
  q.push(n);

  while (!q.empty()) {
    Node n;
    n = q.front();
    q.pop();
    int x = n.x;
    int y = n.y;
    if (x == w - 1 && y == h - 1) {
      can_goal = true;
      int cnt = 0;
      for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
          if (s[i][j] == '.') cnt++;
        }
      }
      ans = cnt - n.cnt;
      break;
    }

    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      Node nn;
      nn.x = nx;
      nn.y = ny;
      nn.cnt = n.cnt + 1;
      if (0 <= nx && nx < w && 0 <= ny && ny < h) {
        if (!visited[ny][nx] && s[ny][nx] == '.') {
          visited[ny][nx] = true;
          q.push(nn);
        }
      }
    }
  }
}

int main (void) {
  cin >> h >> w;
  for (int i = 0; i < h; i++) cin >> s[i];

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      visited[i][j] = false;
    }
  }

  visited[0][0] = true;
  bfs(0, 0);

  if (can_goal) cout << ans << endl;
  else cout << -1 << endl;

  return 0;
}
