#include <iostream>
using namespace std;
int main (void) {
    int n;
    int x;

    cin >> n >> x;

    cout << min(x - 1, n - x) << endl;
    
    return 0;
}