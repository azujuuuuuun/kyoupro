#include <iostream>
using namespace std;
const int N = 26;
int main (void) {
    string S;
    bool appear[N];

    for (int i = 0; i < N; i++) appear[i] = false;

    cin >> S;

    for (int i = 0; i < S.length(); i++) appear[S[i] - 'a'] = true;

    for (int i = 0; i < N; i++) {
        if (!appear[i]) {
            char c = 'a' + i;
            cout << c << endl;
            return 0;
        }
    }
    cout << "None" << endl;

    return 0;
}