#include <iostream>
#include <stack>
using namespace std;
int main (void) {
    string X;

    cin >> X;

    stack<char> s;
    for (int i = 0, len = X.length(); i < len; i++) {
        if (X[i] == 'S') {
            s.push(X[i]);
        } else if (X[i] == 'T' && (s.size() == 0 || s.top() == 'T')) {
            s.push(X[i]);
        } else if (X[i] == 'T' && s.top() == 'S') {
            s.pop();
        }
    }

    cout << s.size() << endl;

    return 0;
}
