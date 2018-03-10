#include <iostream>
using namespace std;
int main (void) {
    string s;

    cin >> s;

    int ai;
    int zi;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') {
            ai = i;
            break;
        }
    }
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == 'Z') {
            zi = i;
            break;
        }
    }

    cout << zi - ai + 1 << endl;
    
    return 0;
}