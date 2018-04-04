#include <iostream>
using namespace std;
int main (void) {
    int N;
    int A;
    int B;

    cin >> N >> A >> B;

    if (N <= 5) {
        cout << B * N << endl;
    } else {
        cout << B * 5 + A * (N - 5) << endl;
    }

    return 0;
}