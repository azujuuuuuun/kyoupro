#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
const int LEN_MAX = 100;
int main (void) {
    char s[LEN_MAX];
    char t[LEN_MAX];

    cin >> s;
    cin >> t;

    int s_len = strlen(s);
    int t_len = strlen(t);

    sort(s, s + s_len);
    sort(t, t + t_len, greater<int>());

    string s_str = string(s);
    string t_str = string(t);

    if (s_str < t_str) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}