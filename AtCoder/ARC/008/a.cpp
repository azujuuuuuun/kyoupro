#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;

    int ans = 0;
    ans += N / 10 * 100;
    N -= N / 10 * 10;
    if (N <= 6) {
        ans += 15 * N;
    } else {
        ans += 100;
    }
    
    cout << ans << endl;

    return 0;
}