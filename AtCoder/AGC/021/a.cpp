#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main (void) {
    ll N;

    cin >> N;

    string s = to_string(N);
    int numOfDigits = s.length();

    int h = s[0] - '0';

    int ans = 0;
    if (numOfDigits == 1) {
        ans = h;
    } else {
        ans = h - 1 + (numOfDigits - 1) * 9;
    }

    bool is_all_nine = true;
    for (int i = 1; i < numOfDigits; i++) {
        if (s[i] != '9') {
            is_all_nine = false;
        }
    }
    if (is_all_nine) {
        ans = h + (numOfDigits - 1) * 9;
    }

    cout << ans << endl;

    return 0;
}
