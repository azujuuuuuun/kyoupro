#include <iostream>
using namespace std;
int main (void) {
    int N;
    int Q;

    cin >> N >> Q;
    int s[N + 1] = {0};
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        s[l - 1]++;
        s[r]--;
    }

    for (int i = 0; i < N; i++) {
        cout << s[i] % 2;
        s[i + 1] += s[i];
    }
    cout << endl;

    return 0;
}
