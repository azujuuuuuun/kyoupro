#include <iostream>
using namespace std;
int sumOfEachDigit (int n) {
    int ret = 0;
    while (n >= 1) {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

int main (void) {
    int n;
    int a;
    int b;
    int ans = 0;

    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {
        int sum = sumOfEachDigit(i);
        if (a <= sum && sum <= b) ans += i;
    }

    cout << ans << endl;

    return 0;
}