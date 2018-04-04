#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    double Height;
    double BMI;

    cin >> Height >> BMI;

    cout << BMI * pow(Height / 100, 2) << endl;

    return 0;
}