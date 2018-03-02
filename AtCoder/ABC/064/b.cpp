#include <iostream>
#include <algorithm>
using namespace std;
const int N_MAX = 100;
int main (void) {
    int N;
    int a[N_MAX];
    int ans = 0;

    cin >> N;
    for (int i = 0; i < N; i++) cin >> a[i];

    sort(a, a + N);

    for (int i = 0; i < N - 1; i++) ans += a[i + 1] - a[i];

    cout << ans << endl;
    
    return 0;
}