#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define debug(x) cerr << #x << " = " << x << endl;


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, k, mn, i, j;
    cin >> t;
    while (t--) {
        mn = 0;
        cin >> n >> k;
        j = 0;
        if (k != 0) {
            k -= n;
            mn++;
        }

        i = n - 1;
        while (k > 0 && i > 0) {
            j++;
            k -= i;
            mn++;
            if (j % 2 == 0) i--;
        }
        // debug(k);
        cout << mn << endl;
    }
}
