#include <iostream>
#include <cmath>
using namespace std;
const int D = pow(10, 9) + 7;
int main (void) {
    int N;

    cin >> N;

    long long ans = 1;
    for (int i = 1; i <= N; i++) ans = ans * i % D;

    cout << ans << endl;

    return 0;
}