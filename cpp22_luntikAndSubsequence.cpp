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
    int oneCount = 0;
    int zeroCount = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        oneCount += (a[i] == 1);
        zeroCount += (a[i] == 0);
    }
    if(oneCount == 0){
        cout << 0 << endl;
        return;
    }
   
    ll ans = 0;
   
    cout << (oneCount) * (1LL << zeroCount)  << endl; // imp: 1LL << zeroCount = 2^zeroCount
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
