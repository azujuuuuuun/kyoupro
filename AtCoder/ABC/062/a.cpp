#include <iostream>
using namespace std;
int main (void) {
    int x, y;
    int group[13] = {0, 1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};

    cin >> x >> y;

    x = group[x];
    y = group[y];

    if (x == y) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}