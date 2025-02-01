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
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    ll op = 0;
    while (n != 1) {
        if (n % 6 == 0) {
            n /= 6;
        } else if (n % 3 == 0) {
            n *= 2;
        } else {
            cout << -1 << endl;
            return;
        }
        op++;
    }
    cout << op << endl;

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
