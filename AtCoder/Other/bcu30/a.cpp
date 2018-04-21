#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int C[30] = {0};
    for (int i = 0; i < N; i++) {
        C[A[i]]++;
    }

    for (int i = 0; i < 30; i++) {
        if (i == 29) {
            cout << C[i] << endl;
        } else {
            cout << C[i] << " ";
        }
    }

    return 0;
}
