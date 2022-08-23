#include <bits/stdc++.h>
using namespace std;

void fasterIO() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

void solve() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << j;
        for (int j = 1; j <= n + n - i - i; j++)
            cout << " ";
        for (int j = i; j >= 1; j--)
            cout << j;
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
