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

    ll n;
    cin >> n;

    vector<ll> a(n);
    FOR(i,0,n) cin>>a[i];


    if(n % 2 == 0){
        /*
                        e.g .   [1 2 3 7 2 8] ,if Xor = 4
                operation =1    [4 4 4 4 4 4] (replace all elements with Xor = 4), now Xor of these all is 0 
                operation =2    [0 0 0 0 0 0] (replace all elements with Xor = 0), all elements becomed 0 
        */
        cout<< 2 << endl;
        cout<< 1 << " " << n << endl;
        cout<< 1 << " " << n << endl;
    }
    else{
        /* 
        VVVVVV IMPPP....
        e.g. [1 1 9 9 0 1 8]
        xor all elements 1 to n = 9
        operation = 0;                                                                           [1 1 9 9 0 1 8]
        1.xor from 1 to n and put replace all elements with xor , operation = 1 ==>                [9 9 9 9 9 9 9]
        2;xor from 1 to n-1 and put replace all from 1 to n-1 elements with xor , operation = 2    [0 0 0 0 0 0 9]
        3;xor from n-1 to n and put replace (n-1)th and nth  elements with xor , operation = 3     [0 0 0 0 0 9 9]
        4;xor from n-1 to n and put replace (n-1)th and nth  elements with xor , operation = 4     [0 0 0 0 0 0 0]

        now xor of all elements will be zero
        */
        // int XOR = accumulate(a.begin(),a.end(),0,bit_xor<int>()); // find xor of all elements 1 to n
        // for(auto it : a) it = XOR;
        // XOR = accumulate(a.begin(),a.end()-1,0,bit_xor<int>());  // 1 to n-1
        // for(int i = 0 ; i < n-1 ;i++) a[i] = XOR;
        // XOR = accumulate(a.end()-1,a.end(),0,bit_xor<int>());  // n-1 to n
        // for(int i = n-2 ; i < n ;i++) a[i] = XOR;
        // XOR = accumulate(a.end()-1,a.end(),0,bit_xor<int>());  // n-1 to n
        // for(int i = n-2 ; i < n ;i++) a[i] = XOR;

        // for(int i = 0 ; i < n ;i++ ) cout<< a[i] << " ";
        cout<< 4 << endl;
        cout<< 1<< " "<< n << endl;
        cout<< 1<< " "<< n-1 << endl;
        cout<< n-1<< " "<< n << endl;
        cout<< n-1<< " "<< n << endl;

    }


    
    
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
