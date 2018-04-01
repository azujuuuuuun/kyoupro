#include <iostream>
using namespace std;
const int N = 4;
int main (void) {
    char c[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> c[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << c[N - 1 - i][N - 1 - j];
            if (j != N - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}