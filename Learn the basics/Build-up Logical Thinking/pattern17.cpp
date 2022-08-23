#include <bits/stdc++.h>
using namespace std;

void fasterIO() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

void solve() {
    int n = 4;

    for (int i = 0; i < n; i++) {

        for (int j = 1; j < n - i; j++)
            cout << " ";
        int offset = 0;
        while (offset <= i) {
            cout << (char)(65 + offset);
            offset++;
        }
        offset--;
        while (offset > 0) {
            cout << (char)(65 + offset - 1);
            offset--;
        }
        cout << "\n";
    }
}

int main() {
    // int tc;
    // cin >> tc;

    // while (tc--)
    solve();

    return 0;
}
