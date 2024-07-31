#include <bits/stdc++.h>

#define int long long int
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

signed main() {
    fastIO
    int n, m;
    cin >> n;
    vector<int> v(n), prefix(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        prefix[i] = v[i];
        if (i != 0) prefix[i] += prefix[i - 1];
    }
    cin >> m;
    sort(v.begin(), v.end());
    vector<int> cheap(v);
    for (int i = 1; i < n; ++i) {
        cheap[i] += cheap[i - 1];
    }

    int t, l, r, ans;
    while (m--) {
        cin >> t >> l >> r;
        l--; r--;
        if (t == 1) {
            if (l == 0) ans = prefix[r];
            else ans = prefix[r] - prefix[l - 1];
        } else {
            if (l == 0) ans = cheap[r];
            else ans = cheap[r] - cheap[l - 1];
        }
        cout << ans << endl;
    }

}
