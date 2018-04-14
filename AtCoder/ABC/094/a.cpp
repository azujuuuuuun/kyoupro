#include <iostream>
using namespace std;
int main (void) {
    int A;
    int B;
    int X;

    cin >> A >> B >> X;

    if (A > X) {
        cout << "NO" << endl;
    } else if (A + B >= X) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
