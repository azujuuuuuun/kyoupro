#include <iostream>
using namespace std;
int main (void) {
    string S, T;

    cin >> S;
    cin >> T;

    bool can_win = true;
    for (int i = 0, len = S.length(); i < len; i++) {
        if (S[i] == T[i]) {
            continue;
        } else if (S[i] == '@') {
            if (!(T[i] == 'a' || T[i] == 't' || T[i] == 'c' || T[i] == 'o' || T[i] == 'd' || T[i] == 'e' || T[i] == 'r')) {
                can_win = false;
            }
        } else if (T[i] == '@') {
            if (!(S[i] == 'a' || S[i] == 't' || S[i] == 'c' || S[i] == 'o' || S[i] == 'd' || S[i] == 'e' || S[i] == 'r')) {
                can_win = false;
            }
        } else {
            can_win = false;
        }
    }

    if (can_win) {
        cout << "You can win" << endl;
    } else {
        cout << "You will lose" << endl;
    }
    return 0;
}