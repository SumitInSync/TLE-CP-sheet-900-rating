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
set<pair<int,int>> getKnightMoves(int a,int b,int x,int y){
    set<pair<int,int>>st;
    st.insert({x+a,y+b});
    st.insert({x+a,y-b});

    st.insert({x-a,y+b});
    st.insert({x-a,y-b});

    st.insert({x-b,y+a});
    st.insert({x-b,y-a});

    st.insert({x+b,y+a});
    st.insert({x+b,y-a});

   return st;

}
// Solve function
void solve() {
    ll a,b;
    cin >> a >> b;
    ll xk,yk,xq,yq;
    cin>> xk >> yk ;
    cin >> xq >> yq;
    int cnt = 0;
    set<pair<int,int>> kingMoves = getKnightMoves(a,b,xk,yk);
    set<pair<int,int>> queenMoves = getKnightMoves(a,b,xq,yq);

    set<pair<int,int>> intersection;

    for(auto it : kingMoves){
        if(queenMoves.find(it) != queenMoves.end()){
            cnt++;
        }
    }
    cout<< cnt<< endl;
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
