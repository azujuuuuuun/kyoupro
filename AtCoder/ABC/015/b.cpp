#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    double sum = 0;
    double cnt = 0;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if (A != 0) {
            cnt++;
        }
        sum += A;
    }

    cout << ceil(sum / cnt) << endl;
    
    return 0;
}