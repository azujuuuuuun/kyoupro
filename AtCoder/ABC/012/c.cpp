#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;

    int sum = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            sum += i * j;
        }
    }
    int q = sum - N;

    for (int i = 1; i <= 9; i++) {
        if (q % i == 0 && q / i / 10 < 1) {
            cout << i << " x " << q / i << endl;
        }
    }
    
    return 0;
}