#include <iostream>
#include <cmath>
using namespace std;
const int N_MAX = pow(10, 5);
int main (void) {
    int N;
    int A, B;
    int h[N_MAX];
    int ma = 0;
    int mai = 0;

    cin >> N >> A >> B;
    for (int i = 0; i < N; i++) {
        cin >> h[i];
        if (h[i] > ma) {
            ma = h[i];
            mai = i;
        }
    }

    int ans = 0;
    while (true) {
        bool end = true;
        ma = 0;
        for (int i = 0; i < N; i++) {
            if (i == mai) h[i] -= A;
            else h[i] -= B;
            if (h[i] > ma) {
                ma = h[i];
                mai = i;
            }
            if (h[i] > 0) end = false;
        }
        ans++;
        if (end) break;
    }

    cout << ans << endl;

    return 0;
}