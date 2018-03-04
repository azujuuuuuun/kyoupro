#include <iostream>
using namespace std;
typedef long long ll;
int main (void) {
    int N;
    ll MARCH[5] = {0};

    cin >> N;
    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;
        if (S[0] == 'M') MARCH[0]++;
        else if (S[0] == 'A') MARCH[1]++;
        else if (S[0] == 'R') MARCH[2]++;
        else if (S[0] == 'C') MARCH[3]++;
        else if (S[0] == 'H') MARCH[4]++;
    }

    ll ans = 0;
    ans += MARCH[0] * MARCH[1] * MARCH[2];
    ans += MARCH[0] * MARCH[1] * MARCH[3];
    ans += MARCH[0] * MARCH[1] * MARCH[4];
    ans += MARCH[0] * MARCH[2] * MARCH[3];
    ans += MARCH[0] * MARCH[2] * MARCH[4];
    ans += MARCH[0] * MARCH[3] * MARCH[4];
    ans += MARCH[1] * MARCH[2] * MARCH[3];
    ans += MARCH[1] * MARCH[2] * MARCH[4];
    ans += MARCH[1] * MARCH[3] * MARCH[4];
    ans += MARCH[2] * MARCH[3] * MARCH[4];

    cout << ans << endl;

    return 0;
}