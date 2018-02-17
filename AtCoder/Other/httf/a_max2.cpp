#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
typedef long long ll;
const int N = 100;
const int Q_MAX = 1000;
const int H = 100;
int a[N][N];
int main (void) {
  int b[N][N];
  int x[Q_MAX];
  int y[Q_MAX];
  int h[Q_MAX];

  for (int i = 0; i < Q_MAX; i++) {
    x[i] = 0;
    y[i] = 0;
    h[i] = 1;
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> a[i][j];
      b[i][j] = 0;
    }
  }

  int cnt = 0;
  while (1) {
    if (cnt >= Q_MAX) break;
    int ma = 0;
    int mai = 0;
    int maj = 0;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (a[i][j] - b[i][j] > ma) {
          ma = a[i][j] - b[i][j];
          mai = i;
          maj = j;
        }
      }
    }
    ma = max(ma, N);
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        b[i][j] += max(0, ma - abs(i - mai) - abs(j - maj));
      }
    }
    x[cnt] = maj;
    y[cnt] = mai;
    h[cnt] = ma;
    cnt++;
  }

  cout << cnt << endl;
  for (int i = 0; i < cnt; i++) cout << x[i] << " " << y[i] << " " << h[i] << endl;

  return 0;
}
