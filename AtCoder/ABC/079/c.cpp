#include <iostream>
using namespace std;
int main (void) {
    string s;

    cin >> s;

    int A = s[0] - '0';
    int B = s[1] - '0';
    int C = s[2] - '0';
    int D = s[3] - '0';

    if (A + B + C + D == 7) cout << A << "+" << B << "+" << C << "+" << D << "=7" << endl;
    else if (A + B + C - D == 7) cout << A << "+" << B << "+" << C << "-" << D << "=7" << endl;
    else if (A + B - C + D == 7) cout << A << "+" << B << "-" << C << "+" << D << "=7" << endl;
    else if (A + B - C - D == 7) cout << A << "+" << B << "-" << C << "-" << D << "=7" << endl;
    else if (A - B + C + D == 7) cout << A << "-" << B << "+" << C << "+" << D << "=7" << endl;
    else if (A - B + C - D == 7) cout << A << "-" << B << "+" << C << "-" << D << "=7" << endl;
    else if (A - B - C + D == 7) cout << A << "-" << B << "-" << C << "+" << D << "=7" << endl;
    else if (A - B - C + D == 7) cout << A << "-" << B << "-" << C << "-" << D << "=7" << endl;

    return 0;
}