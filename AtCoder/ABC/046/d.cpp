#include <iostream>
using namespace std;
int main (void) {
    string s;

    cin >> s;

    int pcnt = 0;
    int gcnt = 0;
    for (int i = 0, len = s.length(); i < len; i++) {
        if (s[i] == 'g') {
            gcnt++;
        } else {
            pcnt++;
        }
    }

    cout << (gcnt - pcnt) / 2 << endl;

    return 0;
}
