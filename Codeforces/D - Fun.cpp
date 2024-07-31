#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define endl '\n'

#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define lp(i, s, e) for(int i = s; i < e; ++i)
#define rlp(i, s, e) for(int i = e; i >= s; --i)
#define trav(x, arr) for(auto& x : arr)

#define sort(a) sort(a.begin(), a.end())
#define rsort(a) sort(a.rbegin(), a.rend())

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

void solve() {
    int n, x;
    cin >> n >> x;
    int ans = 0;
    for (int a = 1; a <= min(x, n); ++a) {
        for (int b = 1; b < x - a && a * b < n; ++b) {
            int c = min((n - a * b) / (a + b), x - a - b);
            ans += c;
        }
    }
    cout << ans << endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q = 1;
    cin >> q;
    while (q--) {
        solve();
    }
}
