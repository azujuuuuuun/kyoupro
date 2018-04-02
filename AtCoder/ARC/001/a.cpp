#include <iostream>
#include <climits>
using namespace std;
int main (void) {
    int N;
    string c;

    cin >> N;
    cin >> c;

    int cnt[4] = {0};
    for (int i = 0; i < N; i++) {
        cnt[c[i] - '1']++;
    }
    int ma = 0;
    int mi = INT_MAX;
    for (int i = 0; i < 4; i++) {
        ma = max(ma, cnt[i]);
        mi = min(mi, cnt[i]);
    }

    cout << ma << " " << mi << endl;
    
    return 0;
}