#include <bits/stdc++.h>
using namespace std;

// Aliases for convenience
using ll = long long;
using ull = unsigned long long;
using ld = long double;

// Constants
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

// Macros for loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORD(i, a, b) for (int i = (a); i >= (b); --i)
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define ALL(v) (v).begin(), (v).end()
#define SZ(x) ((int)(x).size())

// Input-output shortcuts
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Debugging tools
#define DEBUG(x) cerr << #x << " = " << (x) << endl;

// Utility functions
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll power(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

// Solve function
void solve() {
    
    ll n,k,x;
    cin >> n >> k >> x;

    /* 
    IMP.
    min_sum -> sum of 1st k integers => min_sum = 1+2+3+.....+ k = (k (2*1 + (k-1)*1)) / 2
    max_sum => sum of last k integers => max_sum = n + (n-1) + (n-2) + (n-3)+....+ (n-k + 1) 

    if our x lies b/w min_sum and max_sum then return YES        
    else return NO
    */
    ll min_sum =0,max_sum =0 ;
    min_sum = (k*(k+1))/2;
    max_sum = 0;
    for(int i = n-k+1; i<= n ;i++) max_sum += i;
    if(min_sum <= x && max_sum >= x){
        cout<< "YES" << endl;
        return;
    }
    else{
        cout<< "NO" << endl;
    }
    
}

int main() {
    FAST_IO;
    int t = 1; // Number of test cases
    cin >> t;  // Uncomment if multiple test cases
    while (t--) {
        solve();
    }
    return 0;
}
