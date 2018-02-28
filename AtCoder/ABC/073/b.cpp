#include <iostream>
using namespace std;
int main (void) {
    int N;
    int ans = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        int l;
        int r;
        cin >> l >> r;
        ans += r - l + 1;
    }

    cout << ans << endl;
    
    return 0;
}