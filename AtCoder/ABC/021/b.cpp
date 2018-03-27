#include <iostream>
using namespace std;
int main (void) {
    int N;
    int a, b;
    int K;

    cin >> N;
    bool visited[N];
    for (int i = 0; i < N; i++) {
        visited[i] = false;
    }
    cin >> a >> b;
    a--;
    b--;
    visited[a] = true;
    visited[b] = true;
    cin >> K;
    for (int i = 0; i < K; i++) {
        int P;
        cin >> P;
        P--;
        if (visited[P]) {
            cout << "NO" << endl;
            return 0;
        } else {
            visited[P] = true;
        }
    }
    cout << "YES" << endl;
    
    return 0;
}