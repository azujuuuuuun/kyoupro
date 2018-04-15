#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    int a[N];
    int b[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + N);

    map<int, int> mp;
    int rank = 0;
    for (int i = 0; i < N; i++) {
        if (i == 0 || b[i] != b[i - 1]) {
            mp[b[i]] = rank;
            rank++;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << mp[a[i]] << endl;
    }

    return 0;
}
