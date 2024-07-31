// Problem link : https://codeforces.com/contest/766/problem/A

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
    string a, b;
    cin >> a >> b;
    int n_a = a.size();
    int n_b = b.size();
    if (a == b)
        cout << -1;
    else
        cout << max(n_a, n_b);
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
