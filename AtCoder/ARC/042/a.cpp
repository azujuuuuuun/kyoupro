#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N_MAX = pow(10, 5);
int has_output[N_MAX + 1] = {0};
int main (void) {
    int N;
    int M;

    cin >> N >> M;
    int a[M];
    for (int i = 0; i < M; i++) {
        cin >> a[i];
    }
    reverse(a, a + M);

    for (int i = 0; i < M; i++) {
        if(!has_output[a[i]]) {
            cout << a[i] << endl;
            has_output[a[i]] = 1;
        }
    }
    for (int i = 1; i <= N; i++) {
        if (!has_output[i]) {
            cout << i << endl;
        }
    }

    return 0;
}
