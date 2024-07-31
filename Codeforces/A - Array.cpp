#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double dl;
#define endl '\n'
#define all(x) (x).begin(), (x).end()

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)

#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl

int main()
{
    fastIO;
    int n, temp; cin >> n;
    vector<multiset<int>> ans(3);
    FOR (i, 0, n) {
        cin >> temp;
        if (temp < 0) {
            ans[0].insert(temp);
        } else if (temp > 0) {
            ans[1].insert(temp);
        } else {
            ans[2].insert(temp);
        }
    }

    int last;
    if (ans[1].empty()) {
        FOR(i, 1, 3) {
            last = *ans[0].begin();
            ans[1].insert(last);
            ans[0].erase(last);
        }
    }
    
    if (ans[0].size() % 2 == 0) {
        last = *ans[0].begin();
        ans[2].insert(last);
        ans[0].erase(last);
    }
    
    FOR(i, 0, 3) {
        cout << ans[i].size() << " ";
        trav(x, ans[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}