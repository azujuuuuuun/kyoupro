#include <iostream>
using namespace std;
int main (void) {
    int N;
    int K;

    cin >> N >> K;
    int t[N];
    for (int i = 0; i < N; i++) {
        cin >> t[i];
    }

    int day = -1;
    for (int i = 0; i < N - 2; i++) {
        if (t[i] + t[i + 1] + t[i + 2] < K) {
            day = i + 3;
            break;
        }
    }

    cout << day << endl;

    return 0;
}
