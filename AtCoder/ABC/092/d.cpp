#include <iostream>
using namespace std;
const int HW_MAX = 100;
int dx[] = {0, -1, 0, 1};
int dy[] = {-1, 0, 1, 0};
int main (void) {
    int A, B;

    cin >> A >> B;

    int grid[HW_MAX][HW_MAX];
    for (int i = 0; i < HW_MAX; i++) {
        for (int j = 0; j < HW_MAX / 2; j++) {
            grid[i][j] = 0;
        }
        for (int j = HW_MAX / 2; j < HW_MAX; j++) {
            grid[i][j] = 1;
        }
    }

    for (int b = 0; b < B;) {
        for (int i = 0; i < HW_MAX; i++) {
            for (int j = HW_MAX / 2; j < HW_MAX; j++) {
                bool is_link = false;
                for (int d = 0; d < 4; d++) {
                    int x = j + dx[d];
                    int y = i + dy[d];
                    if (0 <= i && i < HW_MAX && 0 <= j && j < HW_MAX && grid[y][x] == 1) {
                        is_link = true;
                    }
                }
                if (!is_link) {
                    grid[i][j] = 1;
                }
            }
        }
    }
    for (int a = 0; a < A;) {
        for (int i = 0; i < HW_MAX; i++) {
            for (int j = 0; j < HW_MAX / 2; j++) {
                bool is_link = false;
                for (int d = 0; d < 4; d++) {
                    int x = j + dx[d];
                    int y = i + dy[d];
                    if (0 <= i && i < HW_MAX && 0 <= j && j < HW_MAX && grid[y][x] == 0) {
                        is_link = true;
                    }
                }
                if (!is_link) {
                    grid[i][j] = 0;
                }
            }
        }
    }

    cout << HW_MAX << " " << HW_MAX << endl;
    for (int i = 0; i < HW_MAX; i++) {
        for (int j = 0; j < HW_MAX; j++) {
            if (grid[i][j] == 0) {
                cout << '.';
            } else {
                cout << '#';
            }
        }
        cout << endl;
    }

    return 0;
}