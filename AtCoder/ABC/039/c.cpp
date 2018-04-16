#include <iostream>
using namespace std;
int main (void) {
    string S;

    cin >> S;

    if (S.substr(0, 12) == "WBWBWWBWBWBW") {
        cout << "Do" << endl;
    } else if (S.substr(0, 12) == "WBWWBWBWBWWB") {
        cout << "Re" << endl;
    } else if (S.substr(0, 12) == "WWBWBWBWWBWB") {
        cout << "Mi" << endl;
    } else if (S.substr(0, 12) == "WBWBWBWWBWBW") {
        cout << "Fa" << endl;
    } else if (S.substr(0, 12) == "WBWBWWBWBWWB") {
        cout << "So" << endl;
    } else if (S.substr(0, 12) == "WBWWBWBWWBWB") {
        cout << "La" << endl;
    } else if (S.substr(0, 12) == "WWBWBWWBWBWB") {
        cout << "Si" << endl;
    }

    return 0;
}
