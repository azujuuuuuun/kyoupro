#include <iostream>
using namespace std;
const int N_MAX = 100;
int main (void) {
    int N;
    int T[N_MAX];
    int M;
    int sum = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> T[i];
        sum += T[i];
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        int P;
        int X;
        cin >> P >> X;
        P--;
        sum = sum - T[P] + X;
        cout << sum << endl;
        sum = sum - X + T[P];
    }

    return 0;
}