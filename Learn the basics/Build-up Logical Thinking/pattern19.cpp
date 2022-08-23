#include <bits/stdc++.h>
using namespace std;

void fasterIO() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

void solve() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << "*";
        for (int j = 0; j < 2 * i; j++)
            cout << " ";
        for (int j = 0; j < n - i; j++)
            cout << "*";
        cout << "\n";
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n - i; j++)
            cout << "*";
        for (int j = 2 * i; j > 0; j--)
            cout << " ";
        for (int j = 0; j < n - i; j++)
            cout << "*";
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
