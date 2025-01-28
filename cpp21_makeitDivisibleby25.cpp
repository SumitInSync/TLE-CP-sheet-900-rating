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
    string s = to_string(n);
    int size = s.length();
    // A number is divisible by 25 if its last two digits are 00, 25, 50, or 75.
    
    if(n % 25 == 0){
        cout << 0 <<endl;
        return;
    }
    int min_operations = INT_MAX;
    for(int i = size - 1 ;i >= 0 ;i--){
        for(int j = i-1 ;j >= 0 ;j--){
            if(s[i] == '5'){
                if(s[j] == '2' || s[j] == '7'){
                    int operations = 0;
                    operations += (i - j - 1); // left side
                    operations += (size - i-1); // right side
                    min_operations = min(min_operations,operations);
                }
            }
            else if(s[i] == '0'){
                if(s[j] == '0' || s[j] == '5'){
                     int operations = 0;
                    operations += (i - j - 1); // left side
                    operations += (size - i-1); // right side
                    min_operations = min(min_operations,operations);
                }
            }
        }
    }
    cout << min_operations <<endl;
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
