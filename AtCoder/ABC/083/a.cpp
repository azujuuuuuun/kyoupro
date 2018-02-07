#include <iostream>
using namespace std;
int main (void) {
    int a;
    int b;
    int c;
    int d;

    cin >> a >> b >> c >> d;

    if (a + b > c + d) cout << "Left" << endl;
    else if (a + b == c + d) cout << "Balanced" << endl;
    else cout << "Right" << endl;

    return 0;
}