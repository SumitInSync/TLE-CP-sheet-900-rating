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
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> increase(n + 1, 0), decrease(n + 1, 0);

    // Calculate increasing sequence lengths
    for (int i = 1; i <= n; ++i) {
        if (s[i - 1] == '<') {
            increase[i] = increase[i - 1] + 1;
        }
    }

    // Calculate decreasing sequence lengths
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == '>') {
            decrease[i] = decrease[i + 1] + 1;
        }
    }

    // Calculate the minimum cost
    int minCost = 0;
    for (int i = 0; i <= n; ++i) {
        minCost = max(minCost, max(increase[i], decrease[i]) + 1);
    }

    cout << minCost << endl;
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
