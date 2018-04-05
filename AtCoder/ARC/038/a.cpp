#include <iostream>
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
    int ans = 0;
    for (int i = 0; i < N; i += 2){
        ans += A[i];
    }

    cout << ans << endl;
    
    return 0;
}
