#include <iostream>
#include <set>
using namespace std;
int main (void) {
    string s;
    int k;

    cin >> s >> k;

    set<string> st;
    int i = 0;
    while (i + k <= s.length()) {
        st.insert(s.substr(i, k));
        i++;
    }

    cout << st.size() << endl;

    return 0;
}