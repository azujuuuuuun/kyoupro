#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int A, B;

    cin >> A >> B;

    int a = abs(A);
    int b = abs(B);

    if (a < b) {
        cout << "Ant" << endl;
    } else if (a > b) {
        cout << "Bug" << endl;
    } else {
        cout << "Draw" << endl;
    }

    return 0;
}