#include <iostream>
using namespace std;
int main (void) {
    int A;

    cin >> A;

    int ma = 0;
    for (int x = 1; x < A; x++) {
        int y = A - x;
        ma = max(ma, x * y);
    }

    cout << ma << endl;
    
    return 0;
}