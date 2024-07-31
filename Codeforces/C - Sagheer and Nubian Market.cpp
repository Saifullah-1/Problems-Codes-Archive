#include <bits/stdc++.h>

#define int long long int
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;


bool slv(int k, int S, vector<int>& a, int n, int &cost) {
    vector<int> costs(n);
    for (int i = 0; i < n; ++i) {
        costs[i] = a[i] + (i + 1) * k;
    }
    sort(costs.begin(), costs.end());
    cost = 0;
    for (int i = 0; i < k; ++i) {
        cost += costs[i];
        if (cost > S) return false;
    }
    return cost <= S;
}


signed main() {
    fastIO
    int n, S;
    cin >> n >> S;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int i = 0, j = n, best_k = 0, best_cost = 0;
    while (i <= j) {
        int mid = i + (j - i) / 2;
        int cost = 0;
        if (slv(mid, S, a, n, cost)) {
            best_k = mid;
            best_cost = cost;
            i = mid + 1;
        } else {
            j = mid - 1;
        }
    }

    cout << best_k << " " << best_cost << endl;
}
