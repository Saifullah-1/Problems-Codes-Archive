#include <bits/stdc++.h>

#define int long long int
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

signed main() {
    fastIO
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());

    int mx = 0;
    int j = 0;
    for (int i = 0; i < n; ++i) {
        while (j < n && a[j] - a[i] <= 5) {
            j++;
        }
        mx = max(mx, j - i);
    }

    cout << mx;
    
}