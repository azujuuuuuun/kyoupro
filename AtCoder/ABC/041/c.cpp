#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (void) {
    int N;

    cin >> N;
    vector<pair<int, int> > v;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        v.push_back(make_pair(-a, i + 1));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++) cout << v[i].second << endl;

    return 0;
}