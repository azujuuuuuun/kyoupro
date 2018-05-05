#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int N;

    cin >> N;

    int a[N];
    int ax = 0;
    int cnt = 11;
    while (true) {
        if (ax >= N) {
            break;
        }

        bool flag = true;
        for (int i = 2; i < cnt; i++) {
            if (cnt % i == 0) {
                flag = false;
            }
        }
        if (flag && cnt % 5 == 1) {
            a[ax++] = cnt;
        }
        cnt++;
    }

    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            cout << a[i] << endl;
        } else {
            cout << a[i] << " ";
        }
    }

    return 0;
}
