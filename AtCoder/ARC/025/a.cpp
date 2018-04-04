#include <iostream>
using namespace std;
const int N = 7;
int main (void) {
    int D[N];
    int J[N];

    for (int i = 0; i < N; i++) {
        cin >> D[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> J[i];
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans += max(D[i], J[i]);
    }

    cout << ans << endl;
    
    return 0;
}