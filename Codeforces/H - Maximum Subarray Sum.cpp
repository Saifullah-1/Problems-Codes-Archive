#include <bits/stdc++.h>

#define int long long int
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

signed main() {
    fastIO
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    int sum = x[0];
    int mx = x[0];

    for (int i = 1; i < n; ++i) {
        sum = max(x[i], sum + x[i]);
        if (sum > mx) {
            mx = sum;
        }
    }

    cout << mx;
    return 0;
}
