#include <iostream>
using namespace std;
const int H_MAX = 100;
int main (void) {
    int H, W;

    cin >> H >> W;
    string C[H];
    for (int i = 0; i < H; i++) cin >> C[i];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < 2; j ++) {
            cout << C[i] << endl;
        }
    }

    return 0;
}