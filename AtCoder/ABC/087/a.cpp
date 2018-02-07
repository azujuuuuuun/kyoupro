#include <iostream>
using namespace std;
int main (void) {
    int a;
    int b;
    int x;
    int ans;

    cin >> x >> a >> b;

    ans = x - a;
    ans -= (ans / b) * b;

    cout << ans << endl;

    return 0;
}