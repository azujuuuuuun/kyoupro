#include <iostream>
using namespace std;
const int HW_MAX = 100;
int main (void) {
    int H, W;
    string s[HW_MAX];

    cin >> H >> W;
    for (int i = 0; i < H; i++) cin >> s[i];

    for (int i = 0; i < W + 2; i++) cout << "#";
    cout << endl;
    for (int i = 0; i < H; i++) {
        cout << "#";
        cout << s[i];
        cout << "#" << endl;
    }
    for (int i = 0; i < W + 2; i++) cout << "#";
    cout << endl;

    return 0;
}