#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define endl '\n'

#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>

#define lp(i, s, e) for(int i = s; i < e; ++i)
#define rlp(i, s, e) for(int i = e; i >= s; --i)
#define trav(x, arr) for(auto& x : arr)

#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), (x).rend()


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<vector<int>> dp(n + 1, vector<int>(3, 0));
    for (int i = 1; i <= n; ++i) {
        dp[i] = dp[i - 1];
        dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
        if (a[i - 1] == 1 || a[i - 1] == 3) dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + 1;
        if (a[i - 1] == 2 || a[i - 1] == 3) dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + 1;
    }
    int mx = INT_MIN;
    for (auto x : dp[n]) mx = max(mx, x);
    cout << n - mx;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q = 1;
//    cin >> q;
    while (q--) {
        solve();
    }
}
