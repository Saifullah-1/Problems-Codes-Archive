#include <bits/stdc++.h>

using namespace std;

// Shortcuts for commonly used data types
typedef long long ll;
typedef long double dl;
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Macros for iteration
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
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
    int x, y;
    while (t--)
    {
        cin >> x >> y;
        int screens = 0;
        int large = ceil(y / 2.0);
        int small = 15 * large - 4 * y - x;
        if (small >= 0)
            screens = large;
        else
        {
            screens = large + ceil(-1.0 * small / 15.0);
        }
        cout << screens << endl;
    }
    return 0;
}