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
    int n, temp;
    cin >> n;
    vector<int> v(n);
    for (int i = 1; i <= n; ++i) {
        cin >> temp;
        v[temp - 1] = i;
    }

    for (auto x : v) cout << x << ' ';
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
