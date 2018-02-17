#include <iostream>
#include <random>
using namespace std;
const int n = 100;
int main (void) {
  int a[n][n];
  random_device rnd;
  mt19937 mt(rnd());
  uniform_int_distribution<> rand100(0, 99);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  cout << 1000 << endl;
  for (int i = 0; i < 1000; i++) {
    cout << rand100(mt) << " " << rand100(mt) << " " << rand100(mt) + 1 << endl; 
  }
  return 0;
}
