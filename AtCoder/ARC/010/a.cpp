#include <iostream>
using namespace std;
int main (void) {
    int N;
    int M;
    int A;
    int B;

    cin >> N >> M >> A >> B;
    for (int i = 0; i < M; i++) {
        if (N <= A) {
            N += B;
        }
        int c;
        cin >> c;
        if (N < c) {
            cout << i + 1 << endl;
            return 0;
        } else {
            N -= c;
        }
    }

    cout << "complete" << endl;

    return 0;
}