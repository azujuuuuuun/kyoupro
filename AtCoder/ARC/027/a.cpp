#include <iostream>
using namespace std;
int main (void) {
    int h;
    int m;

    cin >> h >> m;

    cout << (17 - h) * 60 + (60 - m) << endl;

    return 0;
}