#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;

    int a[N];
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % N != 0) {
        cout << -1 << endl;
        return 0;
    }

    int ans = 0;
    int subsum = 0;
    for (int i = 0; i < N; i++) {
        subsum += a[i];
        if (subsum != sum / N * (i + 1)) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}