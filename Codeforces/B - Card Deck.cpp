#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double dl;
#define nl cout << endl;
#define all(x) (x).begin(), (x).end()

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)

#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl

void solve(vector<int> v) {
    vector<int> ans;
    vector<int> indexes;

    int max = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (max < v[i]) {
            indexes.push_back(i);
            max = v[i];
        }
    }
    indexes.push_back(v.size());
    for (int i = indexes.size() - 2; i >= 0; --i) {
        for (int j = indexes[i]; j < indexes[i + 1]; ++j) {
            cout << v[j] << " ";
        }
    }
    nl
}


int main()
{
    fastIO;
    int t, n; cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        FOR(i, 0, n) {
            cin >> v[i];
        }

        solve(v);

        v.clear();
    }
    return 0;
}
