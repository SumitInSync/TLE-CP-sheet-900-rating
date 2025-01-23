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
    vector<int> a(n+1); 
   
    for (int i = 1; i <=n; i++) {
        cin >> a[i];
        
    }
    int maxi = a[n] - a[1];
    // fix a[n]
    for(int i = 1 ;i <= n-1 ;i++){
        maxi = max(maxi,a[n] - a[i]);
    }

    // fix a[1]
    for(int i = 2 ; i<=n;i++){
        maxi = max(maxi,a[i] - a[1]);
    }

    //pick entire array as subsegement
    for(int i = 1 ;i <= n-1 ;i++){
        maxi = max(maxi,a[i] - a[i+1]);
    }
    cout << maxi << endl;
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
