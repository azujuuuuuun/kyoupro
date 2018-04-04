#include <iostream>
using namespace std;
int main (void) {
    string S;

    cin >> S;

    int ict = 0;
    for (int i = 0, len = S.length(); i < len; i++) {
        if (ict == 0 && (S[i] == 'i' || S[i] == 'I')) {
            ict++;
        } else if (ict == 1 && (S[i] == 'c' || S[i] == 'C')) {
            ict++;
        } else if (ict == 2 && (S[i] == 't' || S[i] == 'T')) {
            ict++;
        }
    }

    if (ict == 3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
