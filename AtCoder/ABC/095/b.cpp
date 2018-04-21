#include <iostream>
#include <climits>
using namespace std;
int main (void) {
    int N;
    int X;

    cin >> N >> X;
    int mi = INT_MAX;
    for (int i = 0; i < N; i++) {
        int m;
        cin >> m;
        X -= m;
        mi = min(mi, m);
    }
    int ans = N + X / mi;

    cout << ans << endl;
    
    return 0;
}
