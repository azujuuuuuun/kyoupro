#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) cin >> a[i];

    int ans = INT_MAX;
    for (int i = -100; i <= 100; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += pow(a[j] - i, 2);
        }
        ans = min(ans, sum);
    }

    cout << ans << endl;

    return 0;
}