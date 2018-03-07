#include <iostream>
using namespace std;
int main (void) {
    string A, B;

    cin >> A >> B;

    if (A.length() > B.length()) {
        cout << "GREATER" << endl;
        return 0;
    }
    else if (A.length() < B.length()) {
        cout << "LESS" << endl;
        return 0;
    }
    else {
        for (int i = 0; i < A.length(); i++) {
            if (A[i] == B[i]) continue;
            else if (A[i] > B[i]) {
                cout << "GREATER" << endl;
                return 0;
            } else {
                cout << "LESS" << endl;
                return 0;
            }
        }
        cout << "EQUAL" << endl;
        return 0;
    }
}