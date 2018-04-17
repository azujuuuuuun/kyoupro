#include <iostream>
using namespace std;
string S;
void eraseAll (string str) {
    while (true) {
        int pos = S.find(str);
        if (pos == -1) {
            break;
        }
        S.erase(S.begin() + pos, S.begin() + pos + str.length());
    }
}
int main (void) {
    cin >> S;

    eraseAll("eraser");
    eraseAll("erase");
    eraseAll("dreamer");
    eraseAll("dream");

    if (S.size() == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
