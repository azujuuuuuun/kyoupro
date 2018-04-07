#include <iostream>
using namespace std;
int main (void) {
    int m;
    int n;
    int N;

    cin >> m >> n >> N;

    int ans = 0;
    int rest = 0;
    int sell = N;
    ans = sell;
    int stock = sell + rest;
    if (stock < m) {
        break;
    } else {
        rest = m % n;
        sell = (m - (m % n)) / m * n;
    }


    return 0;
}
