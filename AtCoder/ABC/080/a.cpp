#include <iostream>
using namespace std;
int main (void) {
    int n;
    int a;
    int b;

    cin >> n >> a >> b;

    if (n * a <= b) cout << n * a << endl;
    else cout << b << endl;

    return 0;
}