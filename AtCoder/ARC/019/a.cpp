#include <iostream>
#include <string.h>
using namespace std;
int main (void) {
    string S;

    cin >> S;

    for (int i = 0, len = S.length(); i < len; i++) {
        if (S[i] == 'O') {
            S[i] = '0';
        } else if (S[i] == 'D') {
            S[i] = '0';
        } else if (S[i] == 'I') {
            S[i] = '1';
        } else if (S[i] == 'Z') {
            S[i] = '2';
        } else if (S[i] == 'S') {
            S[i] = '5';
        } else if (S[i] == 'B') {
            S[i] = '8';
        }
    }

    cout << S << endl;

    return 0;
}