#include <bits/stdc++.h>

using namespace std;

#define ll long long
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
    vector<int> h(n);
    for (int i = 0; i < n; ++i) cin >> h[i];
    int dp[n + 1][2];
    dp[0][0] = dp[1][0] = dp[1][1] = INT_MAX;
    dp[0][1] = abs(h[0] - h[1]);
    if (n > 2)
        dp[1][1] = abs(h[0] - h[2]);
    for (int i = 1; i < n; ++i) {
        dp[i + 1][0] = dp[i + 1][1] = min(dp[i][0], dp[i - 1][1]);
        dp[i + 1][0] += abs(h[i] - h[i + 1]);
        if (i < n - 1)
            dp[i + 1][1] += abs(h[i] - h[i + 2]);
    }

    cout << min(dp[n][0], dp[n][1]) << endl;
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
