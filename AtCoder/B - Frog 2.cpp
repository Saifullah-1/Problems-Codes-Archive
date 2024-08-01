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
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) cin >> h[i];
    int dp[n + 1][k];
    for (int i = 0; i < k; ++i) dp[0][i] = INT_MAX;
    for (int i = 0; i < min(k, n); ++i) {
        dp[1][i] = abs(h[0] - h[i + 1]);
    }
    for (int i = 2; i <= n; ++i) {

        int mn = INT_MAX;
        int jump = 0;
        for (int j = i - 1; j >= max(0, i - k); --j) {
            mn = min(mn, dp[j][jump]);
            jump++;
        }

        for (int l = 1; l <= k; ++l) {
            if (i + l - 1 >= n)
                dp[i][l - 1] = mn;
            else
                dp[i][l - 1] = mn + abs(h[i - 1] - h[i + l - 1]);
        }
    }


    int mn_cost = INT_MAX;
    for (int i = 0; i < k; ++i) {
        mn_cost = min(dp[n][i], mn_cost);
    }

    cout << mn_cost << endl;
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
