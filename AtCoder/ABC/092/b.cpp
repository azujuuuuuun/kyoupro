#include <iostream>
using namespace std;
int main (void) {
    int N;
    int D;
    int X;

    cin >> N;
    cin >> D >> X;
    int ans = X;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        for (int j = 1; j <= D; j += A) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}