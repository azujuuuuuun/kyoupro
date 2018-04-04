#include <iostream>
using namespace std;
int main (void) {
    int N;
    int A;
    int B;

    cin >> N >> A >> B;

    int turn = 0;
    while (true) {
        if (turn % 2 == 0) {
            N -= A;
        } else {
            N -= B;
        }

        if (N <= 0) {
            break;
        }

        turn++;
    }

    if (turn % 2 == 0) {
        cout << "Ant" << endl;
    } else {
        cout << "Bug" << endl;
    }

    return 0;
}