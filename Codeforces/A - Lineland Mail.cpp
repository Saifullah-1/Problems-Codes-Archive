// Problem link : https://codeforces.com/contest/567/problem/A

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


const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

void solve() {
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; ++i) cin >> x[i];

    for (int i = 0; i < n; ++i) {
        if (i == 0)
            cout << x[i + 1] - x[i] << ' ' << x[n - 1] - x[i] << endl;
        else if (i == n - 1)
            cout << x[i] - x[i - 1] << ' ' << x[i] - x[0] << endl;
        else
            cout << min(x[i + 1] - x[i], x[i] - x[i - 1]) << ' ' << max(x[n - 1] - x[i], x[i] - x[0]) << endl;
    }
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
