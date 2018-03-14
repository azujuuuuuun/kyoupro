#include <iostream>
using namespace std;
int N;
void dfs (string s) {
    if (s.length() == N) {
        cout << s << endl;
        return ;
    }
    dfs(s + "a");
    dfs(s + "b");
    dfs(s + "c");
}
int main (void) {
    cin >> N;

    string s = "";
    dfs(s);

    return 0;
}