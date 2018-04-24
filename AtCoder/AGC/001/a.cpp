#include <iostream>
#include <algorithm>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    int L[2 * N];
    for (int i = 0; i < 2 * N; i++) {
        cin >> L[i];
    }

    sort(L, L + 2 * N);

    int ans = 0;
    for (int i = 0; i < 2 * N; i += 2) {
        ans += L[i];
    }

    cout << ans << endl;
    
    return 0;
}
