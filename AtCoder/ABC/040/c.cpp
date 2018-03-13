#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    int N;

    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) cin >> a[i];

    int d[N] = {0};
    for (int i = 0; i < N - 1; i++) {
        if (i == 0) d[i + 1] = abs(a[i + 1] - a[i]);
        else d[i + 1] = min(d[i + 1], abs(a[i + 1] - a[i]) + d[i]);
        if (i != N - 2) d[i + 2] = abs(a[i + 2] - a[i]) + d[i];
    }

    cout << d[N - 1] << endl;

    return 0;
}