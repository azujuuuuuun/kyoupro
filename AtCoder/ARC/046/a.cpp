#include <iostream>
using namespace std;
bool isRepdigit(int n) {
    bool ret = true;
    int m = n % 10;
    while (true) {
        n /= 10;
        if (n < 1) {
            break;
        }
        if (n % 10 != m) {
            ret = false;
            break;
        }
    }
    return ret;
}
int main (void) {
    int N;

    cin >> N;

    int ans = 1;
    int cnt = 0;
    while (true) {
        if (isRepdigit(ans)) {
            cnt++;
            if (cnt == N) {
                break;
            }
        }
        ans++;
    }

    cout << ans << endl;

    return 0;
}
