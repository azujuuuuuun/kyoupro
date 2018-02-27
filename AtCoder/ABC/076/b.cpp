#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int N;
    int K;
    int ans = 1;

    cin >> N >> K;

    for (int i = 0; i < N; i++) ans = min(ans * 2, ans + K);

    cout << ans << endl;
     
    return 0;
}