#include <bits/stdc++.h>
using namespace std;

// Shortcuts for commonly used data types
typedef long long ll;
typedef long double dl;
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Macros for iteration
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)

// Input/output macros
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl

int w_arr[100];
ll v_arr[100];
ll dp[101][100001];
int N, W;

ll KS(int i = 0, int w = W)
{
    // cout << i << " " << w << endl;
    if (dp[i][w] != -1) return dp[i][w];
    if (i == N) return 0;
    ll b1 = 0, b2 = 0;
    b1 = KS(i + 1, w);
    if (w - w_arr[i] >= 0)
        b2 = v_arr[i] + KS(i + 1, w - w_arr[i]);
    // cout << "branches >> " << b1 << " " << b2 << endl;
    return dp[i][w] = max(b1, b2);
}

int main() {
    fastIO;
    for(int i = 0; i < 100; ++i)
        for(int j = 0; j < 100001; ++j)
            dp[i][j] = -1;

    cin >> N >> W;

    for (int i = 0; i < N; ++i)
        cin >> w_arr[i] >> v_arr[i];
    cout << KS();
    return 0;
}
