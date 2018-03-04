#include <iostream>
using namespace std;
int main (void) {
    int N;
    bool four = false;

    cin >> N;
    for (int i = 0; i < N; i++) {
        char s;
        cin >> s;
        if (s == 'Y') four = true;
    }

    if (four) cout << "Four" << endl;
    else cout << "Three" << endl;

    return 0;
}