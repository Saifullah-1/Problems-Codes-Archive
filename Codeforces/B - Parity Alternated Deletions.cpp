#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double dl;
#define nl cout << endl;
#define all(x) (x).begin(), (x).end()

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)

#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl

int main()
{
    fastIO
    int n, temp; cin >> n;
    vector<vector<int>> a(2);
    FOR(i, 0, n) {
        cin >> temp;
        if (temp % 2 == 0)
            a[0].push_back(temp);
        else
            a[1].push_back(temp);
    }

    sort(a[0].begin(), a[0].end());
    sort(a[1].begin(), a[1].end());
    int diff;

    ll sum = 0;
    if (a[0].size() > a[1].size() + 1) {
        diff = a[0].size() - a[1].size() - 1;
        FOR(i, 0, diff) {
            sum += a[0][i];
        }
    } else if (a[1].size() > a[0].size() + 1) {
        diff = a[1].size() - a[0].size() - 1;
        FOR(i, 0, diff) {
            sum += a[1][i];
        }
    }

    cout << sum;
    return 0;
}

