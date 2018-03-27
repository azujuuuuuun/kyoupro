#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;
const int N_MAX = pow(10, 5);
int main (void) {
    int N;
    int A[N_MAX];
    int h = 0;

    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A, A + N, greater<int>());

    int cnt = 1;
    for (int i = 0; i < N; i++) {
        if (A[i] == A[i + 1]) cnt++;
        else {
            if (cnt >= 4) {
                if (h == 0) cout << A[i] * A[i] << endl;
                else cout << h * A[i] << endl;
                return 0;
            } else if (cnt >= 2) {
                if (h == 0) h = A[i];
                else {
                    cout << h * A[i] << endl;
                    return 0;
                }
            }
            cnt = 1;
        }
    }
    cout << 0 << endl;

    return 0;
}