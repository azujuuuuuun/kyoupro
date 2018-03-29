#include <iostream>
using namespace std;
int main (void) {
    int A, B;
    int C;

    cin >> A >> B >> C;

    if (A + B == C && A - B == C) {
        cout << '?' << endl;
    } else if (A + B == C) {
        cout << '+' << endl;
    } else if (A - B == C) {
        cout << '-' << endl;
    } else {
        cout << '!' << endl;
    }

    return 0;
}