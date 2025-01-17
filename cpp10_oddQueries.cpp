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
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n); // Use long long
    vector<vector<ll>> queries; // Use long long

    // Input array
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    // Input queries
    for (int i = 0; i < q; i++) {
        ll l, r, k;
        cin >> l >> r >> k;
        queries.push_back({l, r, k});
    }

    // Prefix sum calculation
    vector<ll> prefixSum(n); // Use long long
    prefixSum[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = a[i] + prefixSum[i - 1];
    }

    // Process each query
    for (auto it : queries) {
        ll l = it[0], r = it[1], k = it[2];

        // Convert to 0-based indices
        l--, r--;

        // Calculate sum
        ll totalSum = prefixSum[n - 1];
        ll rangeSum = prefixSum[r] - (l > 0 ? prefixSum[l - 1] : 0);
        ll modifiedSum = totalSum - rangeSum + (r - l + 1) * k;

        // Check if the modified sum is odd
        if (modifiedSum % 2 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
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
