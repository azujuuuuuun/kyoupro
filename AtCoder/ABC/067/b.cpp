#include <iostream>
#include <algorithm>
using namespace std;
const int NK_MAX = 50;
int main (void) {
    int N;
    int K;
    int l[NK_MAX];
    int ans = 0;

    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> l[i];

    sort(l, l + N, greater<int>());

    for (int i = 0; i < K; i++) ans += l[i];

    cout << ans << endl;

    return 0;
}