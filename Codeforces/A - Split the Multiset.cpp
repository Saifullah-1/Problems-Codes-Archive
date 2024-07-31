#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, k, op, temp;
    cin >> t;
    multiset<int> ms;
    while (t--) {
        ms.clear();
        cin >> n >> k;
        op = 0; temp = n;
        ms.insert(n);
        while (temp > 1) {
            ms.erase(temp);
            temp -= k - 1;
            ms.insert(temp);
            op++;
//            cout << "op = " << op << ", temp = " << temp << endl;
        }
        cout << op << endl;
    }

}
