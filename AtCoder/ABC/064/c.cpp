#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
int main (void) {
    int N;
    bool rate[8];
    int cnt = 0;
    int mi = 0;
    int ma = 0;

    for (int i = 0; i < 8; i++) rate[i] = false;

    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (a >= 3200) cnt++;
        else rate[a / 400] = true;
    }

    for (int i = 0; i < 8; i++) {
        if (rate[i]) mi++;
    }

    ma = mi + cnt;
    if (mi == 0) mi = 1;

    cout << mi << " " << ma << endl;

    return 0;
}