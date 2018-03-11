#include <iostream>
using namespace std;
int main (void) {
    string w;

    cin >> w;

    int cnt[26] = {0};
    for (int i = 0; i < w.length(); i++) {
        cnt[w[i] - 'a']++;
    }

    bool beautiful = true;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 != 0) beautiful = false;
    }

    if (beautiful) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}