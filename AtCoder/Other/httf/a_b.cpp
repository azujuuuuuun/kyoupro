#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
typedef long long ll;
const int N = 100;
const int Q_MAX = 1000;
const int H = 100;
int a[N][N];
ll mount (int X, int Y, int b[N][N]) {
  int p[N][N];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      p[i][j] = b[i][j] + max(0, H - abs(i - X) - abs(j - Y));
    }
  }

  ll ret = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      ret += abs(a[i][j] - p[i][j]); 
    }
  }
  return ret;
}

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
    if (cnt > Q_MAX) break;
    ll mi = LLONG_MAX;
    int mii = 0;
    int mij = 0;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        ll ret = mount(j, i, b);
        if (ret < mi) {
          mi = ret;
          mii = i;
          mij = j;
        }
      }
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        b[i][j] += max(0, H - abs(i - mii) - abs(j - mij));
      }
    }
    x[cnt] = mij;
    y[cnt] = mii;
    h[cnt] = H;
    cnt++;
  }

  cout << cnt << endl;
  for (int i = 0; i < cnt; i++) cout << x[i] << " " << y[i] << " " << h[i] << endl;

  return 0;
}
