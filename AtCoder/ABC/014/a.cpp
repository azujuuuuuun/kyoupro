#include <iostream>
using namespace std;
int main (void) {
    int a;
    int b;

    cin >> a;
    cin >> b;

    if (a % b == 0){
        cout << 0 << endl;
    } else {
        cout << b - (a % b) << endl;
    }

    return 0;
}