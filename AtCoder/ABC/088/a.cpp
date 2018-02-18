#include <iostream>
using namespace std;
int main (void) {
  int n;
  int a;

  cin >> n >> a;

  if (n % 500 > a) cout << "No" << endl;
  else cout << "Yes" << endl;

  return 0;
}
