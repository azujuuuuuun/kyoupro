#include <iostream>
using namespace std;
int gcd (int a, int b) {
    if (a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (a % b == 0) {
        return b;
    } else {
        return gcd(b, a % b);
    }
}
int main (void) {
    int N;
    int K;

    cin >> N >> K;
    int G;
    int M = 0;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if (i == 0) {
            G = A;
        } else {
            G = gcd(G, A);
        }
        M = max(M, A);
    }

    if (K % G == 0 && K <= M) {
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
