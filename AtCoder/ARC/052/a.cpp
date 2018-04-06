#include <iostream>
using namespace std;
int main (void) {
    string S;

    cin >> S;

    for (int i = 0, len = S.length(); i < len; i++) {
        if ('1' <= S[i] && S[i] <= '9') {
            if (i != len - 1 && '0' <= S[i + 1]  && S[i + 1] <= '9') {
                cout << S[i] << S[i + 1] << endl;
                break;
            } else {
                cout << S[i] << endl;
                break;
            }
        }
    }

    return 0;
}
