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
    ll n;
    cin >> n ;
    
    if((n & 1) == 0){
        while(n != 1 && (n & 1) == 0){ //  
            n = n >> 1; // n = n/2
        }
        if((n) == 1){
            cout << "NO" << endl;
            return;
        }
        else if((n &1) == 1) {
            cout << "YES" << endl;
            return;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    else{
        cout << "YES" << endl;
    }
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
