#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int mx = 0, sum = 0, i = 0;
        for (int j = 0; j < n; ++j) {
            sum += v[j];
            while (v[j] - v[i] > 1 || sum > m) {
                sum -= v[i];
                i++;
            }
            mx = max(mx, sum);
        }

        cout << mx << endl;
    }
}
