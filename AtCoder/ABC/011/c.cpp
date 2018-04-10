#include <iostream>
#include <algorithm>
using namespace std;
const int n = 3;
int main (void) {
    int N;
    int NG[n];

    cin >> N;
    for (int i = 0; i < n; i++) {
        cin >> NG[i];
    }

    sort(NG, NG + n);

    if (NG[0] == NG[1] + 1 && NG[1] == NG[2] + 1) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if(NG[i] == N) {
            cout << "NO" << endl;
            return 0;
        }
    }

    for (int i = 0; i < 100; i++) {
        if (N - 3 != NG[0] && N - 3 != NG[1] && N - 3 != NG[2]) {
            N -= 3;
        } else if (N - 2 != NG[0] && N - 2 != NG[1] && N - 2 != NG[2]) {
            N -= 2;
        } else if (N - 1 != NG[0] && N - 1 != NG[1] && N - 1 != NG[2]) {
            N -= 1;
        } else {
            break;
        }
    }

    if (N <= 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
