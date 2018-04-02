#include <iostream>
using namespace std;
const int N = 3;
int main (void) {
    string S[N];

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    int turn = 0;
    int pos[N] = {0};
    int len[N];
    for (int i = 0; i < N; i++) {
        len[i] = S[i].length();
    }
    while (true) {
        if (pos[turn] == len[turn]) {
            break;
        }
        char c = S[turn][pos[turn]];
        pos[turn]++;
        if (c == 'a') {
            turn = 0;
        } else if (c == 'b') {
            turn = 1;
        } else {
            turn = 2;
        }
    }

    if (turn == 0) {
        cout << 'A' << endl;
    } else if (turn == 1) {
        cout << 'B' << endl;
    } else {
        cout << 'C' << endl;
    }

    return 0;
}