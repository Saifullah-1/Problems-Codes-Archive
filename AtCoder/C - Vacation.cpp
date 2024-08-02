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
    vector<vector<int>> abc(n, vector<int>(3));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> abc[i][j];

    int dp[n + 1][3];
    dp[0][0] = dp[0][1] = dp[0][2] = 0;
    for (int i = 1; i <= n; ++i) {
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + abc[i - 1][0];
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + abc[i - 1][1];
        dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + abc[i - 1][2];
    }

    cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << endl;
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
