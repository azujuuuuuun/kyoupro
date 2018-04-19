#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main (void) {
    ll N;
    ll M;

    cin >> N >> M;

    cout << (M * 1900 + (N - M) * 100) * pow(2, M) << endl;

    return 0;
}
