#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
 
void solve() {
    
    string s;
    cin >> s;
    int n = s.length();
    int zero = count(s.begin(), s.end(), '0');
    int one = count(s.begin(), s.end(), '1');
    if(zero == 0 || zero == n){
        cout << "NET" << endl;
        return;
    }
    int mini = min(zero,one);
    if((mini & 1) == 1){ // odd
        cout << "DA" << endl;
    }
    else{
        cout << "NET" << endl;
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
