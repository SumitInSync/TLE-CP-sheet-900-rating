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
    ll n , x;
    cin >> n >> x;

    vector<int>a(n);
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        
    }    

    // maximum beauty : [a1/x] + [a2/x] + [a3/x]....
    // minimum beauty : [(a1+a2 + a3 + ...)/x]
    ll sum = accumulate(a.begin(), a.end(),0LL);

    ll maxi =0;
    ll mini = (sum/x) + (sum % x != 0);
    for(int i =0 ;i < n ;i++){
        maxi += (a[i]/x) + (a[i] % x != 0);
    }
    cout << mini << " "<< maxi << endl;
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
