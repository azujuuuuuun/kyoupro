#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;

    int card[7] = {0, 1, 2, 3, 4, 5, 6};
    N %= 30;
    for (int i = 0; i < N; i++) {
        swap(card[i % 5 + 1], card[i % 5 + 2]);
    }

    for (int i = 1; i < 7; i++) {
        if (i == 6) {
            cout << card[i] << endl;
        } else {
            cout << card[i];
        }
    }

    return 0;
}
