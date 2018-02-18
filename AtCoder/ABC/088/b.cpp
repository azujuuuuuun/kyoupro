#include <iostream>
#include <algorithm>
using namespace std;
const int N_MAX = 100;
int main (void) {
  int n;
  int a[N_MAX];
  int alice = 0;
  int bob = 0;

  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];

  sort(a, a + n, greater<int>());

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) alice += a[i];
    else bob += a[i];
  }

  cout << alice - bob << endl;

  return 0;
}
