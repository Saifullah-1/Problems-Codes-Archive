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
    int h, w;
    cin >> h >> w;
    vector<vector<char>> grid(h, vector<char>(w));
    string temp;
    for (int i = 0; i < h; ++i) {
        cin >> temp;
        for (int j = 0; j < w; ++j)
            grid[i][j] = temp[j];
    }

    vector<vector<int>> dp(h, vector<int>(w + 1, 0));
    for (int i = 2; i <= w; ++i) {
        if (grid[0][i - 1] == '#')
            break;
        dp[0][i] = 1;
    }
    for (int i = 1; i < h; ++i) {
        if (grid[i][0] == '#')
            break;
        dp[i][1] = 1;
    }

    for (int i = 1; i < h; ++i) {
        for (int j = 2; j <= w; ++j) {
            if (grid[i][j - 1] == '.')
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            dp[i][j] %= MOD;
        }
    }

    cout << dp[h - 1][w] << endl;
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
