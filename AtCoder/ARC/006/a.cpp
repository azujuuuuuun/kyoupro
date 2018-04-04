#include <iostream>
using namespace std;
const int N = 6;
int main (void) {
    int E[N];
    int B;
    int L[N];

    for (int i = 0; i < N; i++) {
        cin >> E[i];
    }
    cin >> B;
    int cnt = 0;
    bool bonus = false;
    for (int i = 0; i < N; i++) {
        cin >> L[i];
        for (int j = 0; j < N; j++) {
            if (L[i] == E[j]) {
                cnt++;
            }
        }
        if (L[i] == B) {
            bonus = true;
        }
    }

    if (cnt == 6) {
        cout << 1 << endl;
    } else if (cnt == 5 && bonus) {
        cout << 2 << endl;
    } else if (cnt == 5 && !bonus) {
        cout << 3 << endl;
    } else if (cnt == 4) {
        cout << 4 << endl;
    } else if (cnt == 3) {
        cout << 5 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}