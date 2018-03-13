#include <iostream>
using namespace std;
int main (void) {
    int A, B;
    int C;

    cin >> A >> B >> C;

    cout << C / min(A, B) << endl;

    return 0;
}