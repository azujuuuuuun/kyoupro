#include <iostream>
using namespace std;
int main (void) {
    int A;
    int B;
    int C;
    int K;
    int S;
    int T;

    cin >> A >> B >> C >> K >> S >> T;

    int ans = A * S + B * T;
    if (S + T >= K) ans -= (S + T) * C;

    cout << ans << endl;

    return 0;
}