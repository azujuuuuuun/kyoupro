#include <iostream>
#include <algorithm>
using namespace std;
int main (void) {
    char S[5];
    int N;

    for (int i = 0; i < 5; i++) cin >> S[i];
    cin >> N;
    N--;

    sort(S, S + 5);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i * 5 + j == N) {
                cout << S[i] << S[j] << endl;
                return 0;
            }
        }
    }
}