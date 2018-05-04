#include <iostream>
#include <cmath>
using namespace std;
const int LIMIT = pow(10, 7);
int main (void) {
    int N;
    int A, B;

    cin >> N >> A >> B;

    int cnt = 0;
    while (true) {
        if (cnt == LIMIT) {
            break;
        }

        if (A == 1 && A + 1 == B) {
            cout << "Borys" << endl;
            return 0;
        } else if (A + 1 != B) {
            A++;
        } else {
            A--;
        }

        if (B == N && B - 1 == A) {
            cout << "Alice" << endl;
            return 0;
        } else if (B - 1 != A) {
            B--;
        } else {
            B++;
        }

        cnt++;
    }

    cout << "Draw" << endl;

    return 0;
}
