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
void solve()
{
    ll n;
    cin >> n;
    vector<int>p(n+1);
    for(int i = 1; i <=n; i++) cin>>p[i];

    
    int ans = 0;
    for(int i = 1 ;i <= n ;i++){
        ans = __gcd(abs(p[i] - i),ans);
    }
    cout << ans << endl;

}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
