#include <bits/stdc++.h>
using namespace std;

// Utility functions
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

// Solve function
void solve() {
    long long a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 0 << " " << 0 << endl;
        return;
    }

    long long diff = abs(a - b); // Maximum possible GCD
    long long operations = min(a % diff, diff - a % diff);

    cout << diff << " " << operations << endl;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}