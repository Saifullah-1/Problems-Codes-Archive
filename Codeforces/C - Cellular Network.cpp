#include <bits/stdc++.h>

#define int long long
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;


bool slv(vector<int>& a, vector<int>& b, int r) {
    int n = a.size();
    int m = b.size();
    int j = 0;
    for (int i = 0; i < n; ++i) {
        while (j < m && b[j] < a[i] - r) {
            ++j;
        }
        if (j == m || b[j] > a[i] + r) {
            return false;
        }
    }
    return true;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];
    
    int i = 0, j = INFINITY, result = j;
    while (i <= j) {
        int mid = i + (j - i) / 2;
        if (slv(a, b, mid)) {
            result = mid;
            j = mid - 1;
        } else {
            i = mid + 1;
        }
    }
    
    cout << result << "\n";
    
    return 0;
}

