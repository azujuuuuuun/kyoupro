#include <iostream>
#include <set>
using namespace std;
int main (void) {
    int A, B;
    int K;

    cin >> A >> B >> K;

    set<int> st;

    for (int i = A; i < A + K; i++) {
        if (i <= B) {
            st.insert(i);
        }
    }
    for (int i = B - K + 1; i <= B; i++) {
        if (i >= A) {
            st.insert(i);
        }
    }

    for (auto x : st) {
        cout << x << endl;
    }

    return 0;
}
