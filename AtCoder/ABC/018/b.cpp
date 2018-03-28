#include <iostream>
#include <algorithm>
using namespace std;
int main (void) {
    string S;
    int N;

    cin >> S;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int l, r;
        cin >> l;
        cin >> r;
        l--;
        r--;
        string substring = S.substr(l, r - l + 1);
        reverse(substring.begin(), substring.end());
        S.replace(l, r - l + 1, substring);
    }

    cout << S << endl;

    return 0;
}