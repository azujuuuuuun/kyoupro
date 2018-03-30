#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A, A + N, greater<int>());

    int ma = A[0];
    int i = 1;
    int ans = 0;
    while (true) {
        if (A[i] != ma) {
            ans = A[i];
            break;
        } else {
            i++;
        }
    }

    cout << ans << endl;

    return 0;
}