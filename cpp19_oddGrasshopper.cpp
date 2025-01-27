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
    ll x,n;
    cin >> x >> n;
    /*
    After every 4 iterations, the operations cancel out, and the value of x returns to the same state:
        For example:
        After 4 iterations: x is unchanged.
        After 8 iterations: x is unchanged.
        After 4k iterations: x is unchanged.

        only check (n - remainder + 1) cases
    */
     ll remainder = n % 4;
    for (ll i = n - remainder + 1; i <= n; i++) {
        if ((x & 1) == 0) {  // Check if x is even
            x =  x - i;
        } else {  // x is odd
            x = x + i;
        }
    }


    cout<< x << endl;
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
