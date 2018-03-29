#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;

    int h = N / 3600;
    N -= h * 3600;
    int m = N / 60;
    N -= m * 60;
    int s = N;

    if (h / 10 < 1) {
        cout << "0" << h << ":";
    } else {
        cout << h << ":";
    }
    if (m / 10 < 1) {
        cout << "0" << m << ":";
    } else {
        cout << m << ":";
    }
    if (s / 10 < 1) {
        cout << "0" << s << endl;
    } else {
        cout << s << endl;
    }

    return 0;
}