#include <iostream>
using namespace std;
int main (void) {
    char X;
    string S;

    cin >> X;
    cin >> S;

    for (int i = 0, len = S.length(); i < len; i++) {
        if (S[i] != X) {
            cout << S[i];
        }
    }
    cout << endl;
    
    return 0;
}