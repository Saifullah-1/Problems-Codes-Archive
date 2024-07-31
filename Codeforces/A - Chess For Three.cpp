#include <bits/stdc++.h>
using namespace std;

// Shortcuts for commonly used data types
typedef long long ll;
typedef long double dl;
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Macros for iteration
#define FOR(i, a, b) for (ll i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)

// Input/output macros
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl


int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        int p[3];
        FOR(i, 0, 3) cin >> p[i];
        int draws = 0;
        if ((p[0] + p[1] + p[2]) % 2 != 0) {
            cout << -1;
        } else {
            sort(p, p + 3);
            while (p[2] > 0 && p[1] > 0) {
                p[2]--;
                p[1]--;
                draws++;
                sort(p, p + 3);
            }
            cout << draws;
        }
        cout << endl;
    }
    return 0;
}
