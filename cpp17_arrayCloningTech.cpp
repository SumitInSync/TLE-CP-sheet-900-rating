#include <bits/stdc++.h>
using namespace std;

// Constants
using ll = long long;

// Utility functions
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

// Solve function
void solve() {
    ll n;
    cin >> n;
    vector<int> a(n);
    map<int,int>mpp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mpp[a[i]]++;
    }
    ll mostFrequent = a[0];
    ll freq = -1;
    for(auto it : mpp){
        if(it.second > freq){
            freq = it.second;
            mostFrequent = it.first;
        }
    }
    int operations = 0;
    // freq -> will increase in g.p like 2 -> 4 -> 8 -> 16 ....
    while(freq < n){
        operations++;
        ll prevFreq = freq;
        freq = freq * 2;
        operations += (min(freq,n) - prevFreq);

    }
    cout << operations << endl;
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
