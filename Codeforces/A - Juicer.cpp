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

    int n, b, d;
    cin >> n >> b >> d;
    vi v(n);
    lp(i, 0, n) cin >> v[i];

    int empty = 0, trash = 0;
    lp(i, 0, n) {
        if (v[i] <= b) {
            if (trash + v[i] > d) {
                trash = 0;
                empty++;
            } else {
                trash += v[i];
            }
        }
    }

    cout << empty;

}
