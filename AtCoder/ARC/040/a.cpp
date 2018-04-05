#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    string S[N];
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    int cntr = 0;
    int cntb = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0, len = S[i].length(); j < len; j++) {
            if (S[i][j] == 'R') {
                cntr++;
            } else if (S[i][j] == 'B') {
                cntb++;
            }
        }
    }

    if (cntr > cntb) {
        cout << "TAKAHASHI" << endl;
    } else if (cntr < cntb) {
        cout << "AOKI" << endl;
    } else {
        cout << "DRAW" << endl;
    }

    return 0;
}
