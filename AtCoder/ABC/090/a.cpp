#include <iostream>
using namespace std;
int main (void) {
    string c[3];

    for (int i = 0; i < 3; i++) cin >> c[i];

    for (int i = 0; i < 3; i++) cout << c[i][i];
    cout << endl;
    
    return 0;
}