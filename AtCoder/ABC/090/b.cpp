#include <iostream>
using namespace std;
int main (void) {
    int A, B;

    cin >> A >> B;

    int ans = 0;
    for (int i = A; i <= B; i++) {
        string s = std::to_string(i);
        if (s[0] == s[4] && s[1] == s[3]) ans++;
    }

    cout << ans << endl;

    return 0;
}