#include <iostream>
using namespace std;
int main (void) {
    double W, H;

    cin >> W >> H;

    if (W / 16 * 9 == H) cout << "16:9" << endl;
    else cout << "4:3" << endl;
    
    return 0;
}