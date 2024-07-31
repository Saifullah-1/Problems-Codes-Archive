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
    int n, k;
    string temp;
    cin >> n >> k;
    vector<vi> reduced(n / k, vi(n / k, 0));

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        for (int j = 0; j < n; ++j) {
            reduced[i / k][j / k] = temp[j] - '0';
        }
    }

    for (vector<int> v : reduced) {
        for (int x : v) {
            cout << x;
        }
        cout << endl;
    }
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
