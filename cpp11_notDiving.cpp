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
    vector<ll> a(n); 
   
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) a[i]++;
    }
    for(int i = 1 ;i < n ;i++){
        if(a[i] % a[i-1] != 0 ) continue;
        else{
            a[i]++;
        }
    }
    for (int i = 0; i < n; i++)  cout << a[i] << " ";

    cout <<endl;
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
