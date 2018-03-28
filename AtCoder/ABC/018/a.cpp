#include <iostream>
#include <algorithm>
using namespace std;
int main (void) {
    int N = 3;
    int a[N];
    int b[N];

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + N, greater<int>());

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (a[i] == b[j]) {
                cout << j + 1 << endl;
                break;
            }
        }
    }

    return 0;
}