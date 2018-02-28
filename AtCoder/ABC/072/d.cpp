#include <iostream>
#include <cmath>
using namespace std;
const int N_MAX = pow(10, 5);
int main (void) {
    int N;
    int p[N_MAX];
    int ans = 0;

    cin >> N;
    for (int i = 0; i < N; i++) cin >> p[i];

    for (int i = 0; i < N; i++) {
        if (p[i] == i + 1) {
            swap(p[i], p[i + 1]);
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}