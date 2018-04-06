#include <iostream>
using namespace std;
int main (void) {
    int N;
    int L;
    string S;

    cin >> N >> L;
    cin >> S;

    int cnt = 1;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == '+') {
            cnt++;
        } else if (S[i] == '-') {
            cnt--;
        }
        if (cnt > L) {
            cnt = 1;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
