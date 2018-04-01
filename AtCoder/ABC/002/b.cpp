#include <iostream>
using namespace std;
int main (void) {
    string W;

    cin >> W;

    for (int i = 0, len = W.length(); i < len; i++) {
        if (!(W[i] == 'a' || W[i] == 'i' || W[i] == 'u' || W[i] == 'e' || W[i] == 'o')) {
            cout << W[i];
        }
    }
    cout << endl;
    
    return 0;
}