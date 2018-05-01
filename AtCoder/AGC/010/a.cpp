#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if (A % 2 == 1) {
            cnt++;
        }
    }

    if (cnt % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
