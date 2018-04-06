#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            cout << '1';
        } else {
            cout << '0';
        }
    }
    cout << '7' << endl;

    return 0;
}
