#include <iostream>
#include <climits>
using namespace std;
int main (void) {
    int N;
    int M;

    cin >> N >> M;
    int s[M] = {0};
    int sum = 0;
    for (int i = 0; i < N; i++) {
        int l, r;
        int si;
        cin >> l >> r >> si;
        l--;
        r--;
        s[l] += si;
        s[r + 1] -= si;
        sum += si;
    }

    for (int i = 0; i < M; i++) {
        s[i + 1] += s[i];
    }

    int mi = INT_MAX;
    for (int i = 0; i < M; i++) {
        mi = min(mi, s[i]);
    }

    cout << sum - mi << endl;

    return 0;
}
