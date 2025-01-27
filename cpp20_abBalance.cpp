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
    string s;
    cin >> s;

    // imp observation :
    /*  
        => if string started with 'a'  and ends with 'a' --> number of AB(s) == BA(s) 
            e.g: aabaa --> AB = 1, BA = 1
                abbbbba -> AB = 1, BA = 1
                ababaaababaaba -> AB = 5, BA = 5
            
        => same with 'b' if string started with 'b'  and ends with 'b' --> number of AB(s) == BA(s) 


        => if string started with 'a'  and ends with 'b' -> chnage last 'b'  by 'a'
            e.g: s= aabab -> AB = 2, BA = 1 ===> s= aabaa -> AB = 1 , BA = 1
                s = abbbb -> AB = 1, BA = 0  ===> s = abbba -> AB = 1, BA = 1
        
    */
    int n = s.length();
    if(s[0] == s[n-1]){
        cout << s << endl;
        return;
    }
    else if(s[0] == 'a' && s[n-1] == 'b'){
        s[n-1] = 'a';
        cout << s << endl;
        return;
    }
    else{
        s[n-1] = 'b';
        cout << s << endl;
        return;
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
