#include <iostream>
using namespace std;
int main (void) {
    int T;
    int N;
    int M;

    cin >> T;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cin >> M;
    int B[M];
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    int ai = 0;
    int bi = 0;
    while (true) {
        if (bi == M) {
            cout << "yes" << endl;
            return 0;
        }
        if (ai == N) {
            cout << "no" << endl;
            return 0;
        }

        if (A[ai] <= B[bi] && B[bi] <= A[ai] + T) {
            ai++;
            bi++;
        } else {
            ai++;
        }
    }
}