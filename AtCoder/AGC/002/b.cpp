#include <iostream>
using namespace std;
int main (void) {
    int N;
    int M;

    cin >> N >> M;
    int box[N] = {0};
    bool red[N];
    for (int i = 0; i < N; i++) {
        box[i] = 1;
        red[i] = false;
    }
    red[0] = true;
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        box[x]--;
        box[y]++;
        if (red[x]) {
            red[y] = true;
            if (box[x] == 0) {
                red[x] = false;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (red[i]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
