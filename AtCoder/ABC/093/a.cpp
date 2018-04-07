#include <iostream>
using namespace std;
int main (void) {
    string S;

    cin >> S;

    int abc[3] = {0};
    for (int i = 0; i < 3; i++) {
        if (S[i] == 'a') {
            abc[0]++;
        } else if (S[i] == 'b') {
            abc[1]++;
        } else if (S[i] == 'c') {
            abc[2]++;
        }
    }
    bool ans = true;
    for (int i = 0; i < 3; i++) {
        if (abc[i] == 0) {
            ans = false;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
