#include <bits/stdc++.h>
using namespace std;

// Constants
using ll = long long;
// Utility functions
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

// Solve function
void solve() {
    ll n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Count the number of groups of non-zero elements
    int groups = 0;
    bool inGroup = false;

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            if (!inGroup) {
                groups++; // Start of a new group
                inGroup = true;
            }
        } else {
            inGroup = false; // End of a group
        }
    }

    // Output the result based on the number of groups
    if (groups == 0) {
        cout << 0 << endl; // All elements are zero
    } else if (groups == 1) {
        cout << 1 << endl; // All non-zero elements are in a single group
    } else {
        cout << 2 << endl; // Multiple groups of non-zero elements
    }
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
