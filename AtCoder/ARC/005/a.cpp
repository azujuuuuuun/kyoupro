#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        string w;
        cin >> w;
        if (i == N - 1) {
            w = w.substr(0, w.length() - 1);
        }
        if (w == "TAKAHASHIKUN" || w == "Takahashikun" || w == "takahashikun") {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}