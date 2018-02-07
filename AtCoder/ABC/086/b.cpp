#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    string a;
    string b;
    int ab;
    int n;

    cin >> a >> b;

    ab = stoi(a + b);
    n = sqrt(ab);

    if (n * n == ab) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}