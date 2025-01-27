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

   
    ll operations = 0;
    for (int i = n - 1; i > 0; i--) {
        if (a[i] == 0) {
            cout << -1 << endl;
            return;
        }
        // Halve a[i] until it becomes strictly less than a[i+1]
        while (a[i-1] >= a[i] && a[i-1] > 0) {
            a[i-1] /= 2;
            operations++;
        }
    }

    cout << operations << endl;
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
