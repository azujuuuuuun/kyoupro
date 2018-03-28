#include <iostream>
#include <algorithm>
using namespace std;
int main (void) {
    int N = 3;
    int age[N];

    for (int i = 0; i < N; i++) {
        cin >> age[i];
    }

    sort(age, age + N);

    cout << age[1] << endl;
    
    return 0;
}