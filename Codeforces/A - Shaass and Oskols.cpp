#include <bits/stdc++.h>
using namespace std;

// Shortcuts for commonly used data types
typedef long long ll;
typedef long double dl;
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Macros for iteration
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)

// Input/output macros
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl



int main()
{
     fastIO;
     int n, m;
     cin >> n;
     int a[n];
     for (int i = 0; i < n; ++i)
         cin >> a[i];
     cin >> m;
     int x, y;
     while (m--) {
        cin >> x >> y;
        if (x < n)
            a[x] += a[x - 1] - y;
        if (x - 1 > 0)
            a[x - 2] += y - 1;
         a[x - 1] = 0;
     }

     for (int i = 0; i < n; ++i)
         cout << a[i] << endl;
     return 0;
}
