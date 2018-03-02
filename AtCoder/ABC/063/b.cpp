#include <iostream>
using namespace std;
int main (void) {
    string S;

    cin >> S;

    bool diff = true;
    for (int i = 0; i < S.length() - 1; i++) {
        for (int j = i + 1; j < S.length(); j++) {
            if (S[i] == S[j]) diff = false;
        }
    }

    if (diff) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}