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
    ll a,b,c;
    cin >> a>> b >> c;

    
    bool ans = false;

    ll a1 = 2*b - c;
    if(a1 % a == 0 && a1 > 0) ans = true;

    ll a2 = (a+c)% 2 == 0 ? (a + c)/2 : -1;

    if(a2 % b == 0 && a2 > 0) ans = true;

    ll a3 = 2*b - a;

    if(a3 % c == 0 && a3 > 0) ans = true;

    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    
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
