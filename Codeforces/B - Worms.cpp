#include <bits/stdc++.h>

#define int long long int
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int pile(int n, vector<int> &v) {
    int l = 0, r = v.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (v[mid] < n) l = mid + 1;
        else r = mid - 1;
    }
    return l + 1;
}

signed main() {
    fastIO
    int n, m, temp;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i != 0) a[i] += a[i - 1];
    }
    
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> temp;
        cout << pile(temp, a) << endl;
    }
    
}
