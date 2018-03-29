#include <iostream>
#include <cmath>
using namespace std;
int main (void) {
    int txa, tya;
    int txb, tyb;
    int T;
    int V;
    int n;

    cin >> txa >> tya >> txb >> tyb >> T >> V;
    cin >> n;
    int TV = T * V;
    bool ans = false;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        double d = sqrt(pow(x - txa, 2) + pow(y - tya, 2)) + sqrt(pow(x - txb, 2) + pow(y - tyb, 2));
        if (d <= TV) {
            ans = true;
        }
    }

    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}