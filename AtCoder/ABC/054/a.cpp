#include <iostream>
using namespace std;
int main (void) {
    int A, B;

    cin >> A >> B;

    if (A == 1) A += 13;
    if (B == 1) B += 13;

    if (A > B) cout << "Alice" << endl;
    else if (A < B) cout << "Bob" << endl;
    else cout << "Draw" << endl;
    
    return 0;
}