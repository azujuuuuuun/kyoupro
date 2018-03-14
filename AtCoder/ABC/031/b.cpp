#include <iostream>
using namespace std;
int main (void) {
    int L, H;
    int N;
    
    cin >> L >> H >> N;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if (A < L) cout << L - A << endl;
        else if (A <= H) cout << 0 << endl;
        else cout << -1 << endl;
    }

    return 0;
}