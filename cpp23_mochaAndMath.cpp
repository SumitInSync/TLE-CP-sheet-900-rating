#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int MAX_N = 1e5;
// Constants
using ll = long long;

// Utility functions
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);


// Function to calculate modular exponentiation


// Solve function
void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // int mini = *min_element(a.begin(), a.end());
    // int maxi = *max_element(a.begin(), a.end());
    // int ans = mini & maxi;
    ll ans = a[0];
    for(int i =1 ;i < n ;i++){
        ans &= a[i];
    }
    cout <<  ans << endl;
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
