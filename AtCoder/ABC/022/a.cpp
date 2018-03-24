#include <iostream>
using namespace std;
int main (void) {
    int N;
    int S, T;
    int W;

    cin >> N >> S >> T;
    cin >> W;

    int ans = 0;
    if (S <= W && W <= T) {
        ans++;
    }
    for (int i = 0; i < N - 1; i++) {
        int A;
        cin >> A;
        W += A;
        if (S <= W && W <= T) {
            ans++;
        }
    }


    cout << ans << endl;

    return 0;
}