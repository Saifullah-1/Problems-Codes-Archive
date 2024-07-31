#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double dl;

#define nl cout << endl;
#define all(x) (x).begin(), (x).end()

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)

#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl



int main()
{
    fastIO
    int n, max_f = 0, min_f = INT_MAX; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        max_f = max(max_f, v[i]);
        min_f = min(min_f, v[i]);
    }

    ll n_min = 0, n_max = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] == max_f) ++n_max;
        if (v[i] == min_f) ++n_min;
    }

    cout << max_f - min_f << " ";
    if (max_f == min_f) cout <<  (ll) n * (n - 1) / 2;
    else cout <<  n_max * n_min;
    return 0;
}
