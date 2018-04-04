#include <iostream>
using namespace std;
int main (void) {
    int L;
    int R;

    cin >> L >> R;
    int cntl[41] = {0};
    int cntr[41] = {0};
    for (int i = 0; i < L; i++) {
        int l;
        cin >> l;
        cntl[l]++;
    }
    for (int i = 0; i < R; i++) {
        int r;
        cin >> r;
        cntr[r]++;
    }

    int ans = 0;
    for (int i = 10; i <= 40; i++) {
        ans += min(cntl[i], cntr[i]);
    }

    cout << ans << endl;
    
    return 0;
}