#include <iostream>
using namespace std;
int main (void) {
    string S;
    string T;

    cin >> S >> T;

    int i;
    bool exist;
    for (i = S.size() - 1; i >= 0; i--) {
        exist = true;
        for (int j = 0; j < T.size(); j++) {
            if (i - j < 0) {
                exist = false;
                break;
            }
            if (!(S[i - j] == '?' || S[i - j] == T[T.size() - 1 - j])) exist = false;
        }
        if (exist) break;
    }

    if (exist) {
        for (int j = 0; j < T.size(); j++) S[i - j] = T[T.size() - 1 - j];
        for (int j = 0; j < S.size(); j++) {
            if (S[j] == '?') S[j] = 'a';
        }
        cout << S << endl;
    } else cout << "UNRESTORABLE" << endl;
    return 0;
}