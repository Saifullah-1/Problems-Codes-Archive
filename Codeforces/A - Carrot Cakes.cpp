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

#define sort(a) sort(a.begin(), a.end())
#define rsort(a) sort(a.rbegin(), a.rend())


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q = 1;
    int n, t, k, d;
    while (q--) {
        cin >> n >> t >> k >> d;
        int val = (k * (t + d)) / t;
        if (val - val % k < n)  cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}
