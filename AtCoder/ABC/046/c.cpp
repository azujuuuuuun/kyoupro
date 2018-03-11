#include <iostream>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    int t, a;
    for (int i = 0; i < N; i++) {
        int Ti, Ai;
        cin >> Ti >> Ai;
        if (i == 0) {
            t = Ti;
            a = Ai;
            continue;
        }
        if (Ti < Ai) {
            if (t % Ti != 0) while (t % Ti != 0) t++;
            a = t / Ti * Ai;
        } else if (Ti > Ai){
            if (a % Ai != 0) while (a % Ai != 0) a++;
            t = a / Ai * Ti;
        } else {
            if (t < a) t = a;
            else a = t;
        }
    }

    cout << t + a << endl;

    return 0;
}