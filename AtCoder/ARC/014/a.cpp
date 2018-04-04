#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;

    if (N % 2 == 1) {
        cout << "Red" << endl;
    } else {
        cout << "Blue" << endl;
    }

    return 0;
}