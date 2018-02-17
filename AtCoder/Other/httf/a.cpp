#include <iostream>
#include <cmath>
using namespace std;
const int n = 100;
int main (void) {
  int a[n][n];
  int ma = 0;
  int mai = 0;
  int maj = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
      if (a[i][j] > ma) {
        ma = a[i][j];
        mai = i;
        maj = j;
      }
    }
  }

  /*
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j];
    }
    cout << endl;
  }
  */

  if (ma > 100) ma = 100;

  cout << 1 << endl;
  cout << maj << " " << mai << " " << ma << endl;

  return 0;
}
