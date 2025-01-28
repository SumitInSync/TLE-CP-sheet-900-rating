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
    ll n,m,row,col;
    cin >> n >> m >> row >> col;
    if(n == 1 && m == 1 && row == 1 && col == 1){
        cout << 1 << " "<< 1 << " " << 1<< " " << 1 << endl;
        return;
    }
    if(row == 1){
        if(m == 1){
            cout << 2 << " "<< 1 << " " << n<< " " << 1 << endl;
        }
        else{
            cout << n << " "<< 1 << " " << n<< " " << m << endl;
        }
    }
    else if(row == n){
        if(m == 1){
            cout << 1 << " "<< 1 << " " << n-1<< " " << 1 << endl;
        }
        else{
            cout << 1 << " "<< 1 << " " << 1<< " " << m << endl;
        }
    }
    else{
        cout << n << " "<< 1 << " " << 1 << " "<< m << endl;

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
