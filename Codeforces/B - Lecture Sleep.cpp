#include <bits/stdc++.h>

#define int long long int
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

signed main() {
    fastIO int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (size_t i = 0; i < n; i++) {
        cin >> v[i];
    }

    int theories = 0;
    vector<int> t(n), sleep(n, 0);
    for (size_t i = 0; i < n; i++) {
        cin >> t[i];
        if (t[i]) 
            theories += v[i];
        else 
            sleep[i] = v[i];
    }
    
    // 1 3 5 2 5 4
    // 1 1 0 1 0 0
    int sum = 0, mx = 0;
    for (size_t i = 0; i < k; ++i) {
        sum += sleep[i];
    }
    
    mx = sum;
    for (size_t i = k; i < n; ++i) {
        sum += sleep[i] - sleep[i - k];
        mx = max(mx, sum);
    }
    
    cout << theories + mx;
    return 0;
}
