#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
 
void solve() {
    ll n;
    cin >> n;
   
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<pair<ll,ll>>left(n);
    vector<pair<ll,ll>>right(n);
    left[0] = {a[0],0};
    right[n-1] = {a[n-1],n-1};

    for(int i =1 ;i < n ;i++){
        if(a[i] < left[i-1].first){
            left[i] = {a[i],i};
        }
        else{
            left[i] = left[i-1];
        }
    }
    for(int i = n-2 ;i >= 0 ;i--){
        if(a[i] < right[i+1].first){
            right[i] = {a[i],i};
        }
        else{
            right[i] = right[i+1];
        }
    }

    for(int i =1 ;i < n-1;i++){
        if(left[i-1].first < a[i] && a[i] > right[i+1].first){
            cout << "YES" << endl;
            cout << left[i-1].second +1 << " " << i +1 << " " << right[i+1].second  +1 << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
