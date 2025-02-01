#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
 
void solve() {
    ll n, k;
    cin >> n >> k;
   
    vector<ll> a(n*k);
    for (int i = 0; i < n*k; i++) {
        cin >> a[i];
    }
    int i = n*k;
    ll ans = 0;
    while(k--){
        i = i - (n/2 + 1);
        ans += a[i];
    }
    cout << ans << "\n";
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
