#include <bits/stdc++.h>

#define int long long int
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

signed main() {
    fastIO
    int n, t;
    cin >> n >> t;
    vector<int> a(n + 1);
    a[0] = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    int mx = 0;
    int j = 0;
    for (int i = 0; i <= n; ++i) {
        while (j <= n && a[j] - a[i] <= t) {
            j++;
        }
        mx = max(mx, j - i - 1);
    }

    cout << mx;
}
