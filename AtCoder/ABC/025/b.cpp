#include <iostream>
using namespace std;
int main (void) {
    int N;
    int A, B;

    cin >> N >> A >> B;
    int pos = 0;
    for (int i = 0; i < N; i++) {
        string s;
        int d;
        cin >> s >> d;
        if (d < A) {
            d = A;
        } else if (d > B) {
            d = B;
        }
        if (s == "East") {
            pos += d;
        } else {
            pos -= d;
        }
    }

    if (pos == 0) {
        cout << 0 << endl;
    } else if (pos > 0) {
        cout << "East " << pos << endl;
    } else {
        cout << "West " << abs(pos) << endl;
    }

    return 0;
}