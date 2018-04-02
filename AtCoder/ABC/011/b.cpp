#include <iostream>
using namespace std;
int main (void) {
    string S;

    cin >> S;

    for (int i = 0, len = S.length(); i < len; i++) {
        if (i == 0 && 'a' <= S[i] && S[i] <= 'z') {
            S[i] = S[i] - 32;
        }
        if (i != 0 && 'A' <= S[i] && S[i] <= 'Z') {
            S[i] = S[i] + 32;
        }
    }

    cout << S << endl;

    return 0;
}