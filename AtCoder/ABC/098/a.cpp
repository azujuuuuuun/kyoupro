#include <iostream>
using namespace std;
int main (void) {
  int A, B;

  cin >> A >> B;

  cout << max(A + B, max(A - B, A * B)) << endl;

  return 0;
}
