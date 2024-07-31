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

#define rsort(a) sort(a.rbegin(), a.rend())

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;



void solve() {
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;

    vector<vi> freq(n + 1, vi(26, 0));
    for (int i = 1; i <= n; ++i) {
        freq[i] = freq[i - 1];
        freq[i][a[i - 1] - 'a']++;
        freq[i][b[i - 1] - 'a']--;
    }

    int l, r;
    while (q--) {
        cin >> l >> r;
        l--; r--;

        int op = 0;
        for (int i = 0; i < 26; ++i) {
            if (freq[r + 1][i] - freq[l][i] < 0)
                op -= freq[r + 1][i] - freq[l][i];
        }
        cout << op << endl;
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
