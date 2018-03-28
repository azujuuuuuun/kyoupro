#include <iostream>
#include <set>
using namespace std;
int main (void) {
    int N;
    set<int> st;

    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        while (a % 2 == 0) {
            a /= 2;
        }
        st.insert(a);
    }

    cout << st.size() << endl;
    
    return 0;
}