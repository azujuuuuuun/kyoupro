#include <iostream>
using namespace std;
int main (void) {
    int N;
    int M;
    int X;

    cin >> N >> M >> X;
    int A[M];
    int cnt = 0;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
        if (A[i] < X) cnt++;
    }

    cout << min(cnt, M - cnt) << endl;
    
    return 0;
}
