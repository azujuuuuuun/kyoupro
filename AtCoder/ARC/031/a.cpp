#include <iostream>
#include <algorithm>
using namespace std;
int main (void) {
    string Name;

    cin >> Name;

    string Name2 = Name;
    reverse(Name2.begin(), Name2.end());

    if (Name == Name2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
