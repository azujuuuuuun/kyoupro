#include <iostream>
using namespace std;
int main (void) {
    string s;
    int ans = 0;

    cin >> s;

    if (s[0] == '1') ans++;
    if (s[1] == '1') ans++;
    if (s[2] == '1') ans++;

    cout << ans << endl;

    return 0;
}