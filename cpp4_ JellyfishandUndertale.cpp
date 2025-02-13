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

    ll a, b, n;
    cin >> a >> b >> n;

    vector<ll> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];

    ll sec = 0;
    ll time = b;
    ll i = 0;
    while (time > 0)
    {  
        if(time == 1 && i < n){
            int c = time;
            time = min(c + x[i],a);
            i++;
        }
        
        sec += (time-1);
        time = 1 ;
        if(i == n){
            sec++;
            break;
        }
       
    }
    cout << sec<< endl;
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
