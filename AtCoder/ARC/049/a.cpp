#include <iostream>
using namespace std;
const int N = 4;
int main (void) {
    string S;

    cin >> S;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        A += i;
        S.insert(A, "\"");
    }

    cout << S << endl;

    return 0;
}
