#include <iostream>
using namespace std;
int main (void) {
    int A, B, C;

    cin >> A >> B >> C;

    cout << 2 * (A * B + B * C + C * A) << endl;
    
    return 0;
}