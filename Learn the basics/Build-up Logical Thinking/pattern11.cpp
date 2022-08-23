#include <bits/stdc++.h>
using namespace std;

void fasterIO() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

void solve() {
    int n = 5;
    int x = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << x << " ";
            x = x ^ 1;
        }
        if (i % 2 == 1)
            x = x ^ 1;
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
