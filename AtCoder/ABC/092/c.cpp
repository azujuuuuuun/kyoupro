#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    int A[N + 2];
    A[0] = 0;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    A[N + 1] = 0;

    int sum = 0;
    for (int i = 0; i <= N; i++) {
        sum += abs(A[i] - A[i + 1]);
    }
    for (int i = 1; i <= N; i++) {
        int a = abs(A[i] - A[i - 1]) + abs(A[i + 1] - A[i]);
        int b = abs(A[i + 1] - A[i - 1]);
        sum -= a;
        sum += b;
        cout << sum << endl;
        sum += a;
        sum -= b;
    }

    return 0;
}