#include <iostream>
#include <climits>
using namespace std;
int main (void) {
    int a, b, c;
    int ans = 0;

    cin >> a >> b >> c;

    ans = min(a + b, b + c);
    ans = min(ans, c + a);

    cout << ans << endl;

    return 0;
}