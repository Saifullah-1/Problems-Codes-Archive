#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ull unsigned long long
#define endl '\n'

#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), (x).rend()

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

void solve() {
    int n;
    cin >> n;
    vector<int> h1(n), h2(n);
    for (int i = 0; i < n; ++i) cin >> h1[i];
    for (int i = 0; i < n; ++i) cin >> h2[i];
    vector<vector<int>> dp(n + 1, vector<int>(2, 0));
    dp[1][0] = h1[0];
    dp[1][1] = h2[0];

    for (int i = 2; i <= n; ++i) {
        dp[i][0] = max(dp[i - 1][1], dp[i - 2][1]) + h1[i - 1];
        dp[i][1] = max(dp[i - 1][0], dp[i - 2][0]) + h2[i - 1];
    }

    cout << max(dp[n][0], dp[n][1]) << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q = 1;
    while (q--) {
        solve();
    }
}
