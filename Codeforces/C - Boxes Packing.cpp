#include <bits/stdc++.h>
#include <climits>

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

int main() {
    fastIO
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    multiset<int> ms;

    for (int i = 0; i < n; ++i) {
        auto it = ms.upper_bound(a[i]);
        if (it != ms.end()) {
            ms.erase(it);
        }
        ms.insert(a[i]);
    }

    cout << ms.size() << endl;
}
