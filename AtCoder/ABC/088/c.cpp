#include <iostream>
using namespace std;
const int C_MAX = 3;
int main (void) {
  int c[C_MAX][C_MAX];

  for (int i = 0; i < C_MAX; i++) {
    for (int j = 0; j < C_MAX; j++) {
      cin >> c[i][j];
    }
  }

  for (int a0 = 0; a0 <= c[0][0]; a0++) {
    int b0 = c[0][0] - a0;
    int b1 = c[0][1] - a0;
    int b2 = c[0][2] - a0;
    int a1 = c[1][0] - b0;
    int a2 = c[2][0] - b0;
    if (a1 + b1 == c[1][1] && a1 + b2 == c[1][2] && a2 + b1 == c[2][1] && a2 + b2 == c[2][2]) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
