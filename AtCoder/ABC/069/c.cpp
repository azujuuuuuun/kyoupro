#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int N;
    int four = 0;
    int two = 0;
    int other = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (a % 4 == 0) four++;
        else if (a % 2 == 0) two++;
        else other++;
    }

    if (four + 1 >= two + other) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}