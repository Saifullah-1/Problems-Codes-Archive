#include <bits/stdc++.h>

#define int long long int
using namespace std;

signed main() {
    int n; cin >> n;
    vector<int> v(8, 0);
    int temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        v[temp] += 1;
    }

    // only {1, 2, 4}, {1, 2, 6}, {1, 3, 6} is valid
    if (v[1] % (n / 3) != 0 || v[5] > 0 || v[7] > 0) {
        cout << -1;
    } else {
        vector<vector<int>> l(n / 3);
        int i = 0;
        while (v[1] > 0 && (v[2] > 0 || v[3] > 0 || v[4] > 0 || v[6] > 0)) {
            l[i].push_back(1);
            v[1] -= 1;
            if (v[2] > 0) {
                l[i].push_back(2);
                v[2] -= 1;
                if (v[4] > 0) {
                    l[i].push_back(4);
                    v[4] -= 1;
                } else if (v[6] > 0) {
                    l[i].push_back(6);
                    v[6] -= 1;
                }
            } else if (v[3] > 0 && v[6] > 0) {
                l[i].push_back(3);
                l[i].push_back(6);
                v[3] -= 1;
                v[6] -= 1;
            }
            i = (i + 1) % (n / 3);
        }
        
        bool isValid = true;
        for (int i = 0; i < n / 3 - 1; ++i) {
            if (l[i].size() != l[i + 1].size() || l[i].size() != 3) {
                isValid = false;
                break;
            }
        }
        if (isValid && l.back().size() == 3) {
            for (int i = 0; i < n / 3; ++i) {
                for (int x : l[i]) {
                    cout << x << " ";
                }
                cout << endl;
            }
        } else {
            cout << -1;
        }
    }
}
