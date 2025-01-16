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
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

// Debugging tools
#define DEBUG(x) cerr << #x << " = " << (x) << endl;

// Utility functions
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll power(ll a, ll b, ll m = MOD)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

// Solve function
void solve()
{

    ll n,k;
    cin >> n >> k;
    
    vector<int>a(n);

    for(int i = 0; i < n; i++) cin>> a[i];

    sort(a.begin(), a.end());
    vector<int>diff;
    for(int i = 1; i < n; i++){
        diff.push_back(a[i] - a[i-1]);
    }

    int maxfreq = 0;
    int freq = 0;
    for(int i = 0 ;i < n-1 ;i++){
        if(diff[i] <= k){
            freq++;
        }
        else{
            maxfreq = max(maxfreq,freq);
            freq = 0;
        }

    }
    maxfreq = max(maxfreq,freq);
    cout<< n - (maxfreq + 1) << endl;

    
    
}

int main()
{
    FAST_IO;
    int t = 1; // Number of test cases
    cin >> t;  // Uncomment if multiple test cases
    while (t--)
    {
        solve();
    }
    return 0;
}
