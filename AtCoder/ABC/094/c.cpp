#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main (void) {
    int N;

    cin >> N;
    ll X[N];
    ll Y[N];
    for (int i = 0; i < N; i++) {
        cin >> X[i];
        Y[i] = X[i];
    }

    sort(Y, Y + N);
    for (int i = 0; i < N; i++) {
        if (X[i] <= Y[(N - 1) / 2]) {
            cout << Y[(N - 1) / 2 + 1] << endl;
        } else {
            cout << Y[(N - 1) / 2] << endl;
        }
    }

    return 0;
}
