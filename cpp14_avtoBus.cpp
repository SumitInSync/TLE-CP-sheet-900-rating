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
    if(n < 4 || n % 2 == 1){
        cout << -1 << endl;
        return;
    }
    ll maxi = n / 4;

    ll mini = (n/6) + (n % 6 != 0);

    cout << mini << " " << maxi << endl;
    
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
