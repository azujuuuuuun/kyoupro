#include <iostream>
#include <cstdio>
using namespace std;
int main (void) {
    int N;
    string r;

    cin >> N;
    cin >> r;

    int cnt[5] = {0};
    for (int i = 0; i < N; i++) {
        if (r[i] == 'F') {
            cnt[4]++;
        } else {
            cnt[r[i] - 'A']++;
        }
    }

    double ans = 0;
    for (int i = 0; i < 5; i++) {
        ans += cnt[i] * (4 - i);
    }
    ans /= N;

    printf("%.14f\n", ans);

    return 0;
}