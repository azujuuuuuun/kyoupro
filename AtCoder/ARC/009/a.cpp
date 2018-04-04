#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;

    int sum = 0;
    for (int i = 0; i < N; i++) {
        int a;
        int b;
        cin >> a >> b;
        sum += a * b;
    }
    int ans = sum * 1.05;

    cout << ans << endl;

    return 0;
}