#include <iostream>
using namespace std;
int main (void) {
    int n;

    cin >> n;

    int sum = n * (n + 1) / 2;

    bool is_prime_number = true;
    if (sum == 1) {
        is_prime_number = false;
    }
    for (int i = 2; i < sum; i++) {
        if (sum % i == 0) {
            is_prime_number = false;
            break;
        }
    }

    if (is_prime_number) {
        cout << "WANWAN" << endl;
    } else {
        cout << "BOWWOW" << endl;
    }

    return 0;
}
