#include <iostream>
using namespace std;
int main (void) {
    int N;
    int K;
    int X;
    int Y;

    cin >> N >> K >> X >> Y;

    if (N <= K) cout << N * X << endl;
    else cout << K * X + (N - K) * Y << endl;

    return 0;
}