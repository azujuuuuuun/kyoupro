#include <iostream>
#include <cmath>
using namespace std;
const int n = 100;
const int limit = 1000;
int a[n][n];
bool isInitial () {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] != 0) return false;
    }
  }
  return true;
}

int main (void) {
  int x[limit];
  int y[limit];
  int h[limit];

  for (int i = 0; i < limit; i++) {
    x[i] = 0;
    y[i] = 0;
    h[i] = 1;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  int cnt = 0;
  while (1) {
    if (isInitial()) break;
    if (cnt > limit) break;

    int ma = 0;
    int mai = 0;
    int maj = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (a[i][j] > ma) {
          ma = a[i][j];
          mai = i;
          maj = j;
        }
      }
    }

    ma = min(ma, n); 

    bool minus = false;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        a[i][j] -= max(0, ma - abs(i - mai) - abs(j - maj));
        if (a[i][j] < 0) minus = true; 
      }
    }

    if (minus) break; 

    x[cnt] = maj;
    y[cnt] = mai;
    h[cnt] = ma;
    cnt++;

  }

  cout << cnt << endl;
  for (int i = 0; i < cnt; i++) cout << x[i] << " " << y[i] << " " << h[i] << endl;

  return 0;
}
