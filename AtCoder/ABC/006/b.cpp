#include <iostream>
using namespace std;
int main (void) {
    int n;

    cin >> n;
    int a[n];
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    for (int i = 3; i < n; i++) {
        a[i] = (a[i - 1] + a[i - 2] + a[i - 3]) % 10007;
    }

    cout << a[n - 1] << endl;

    return 0;
}