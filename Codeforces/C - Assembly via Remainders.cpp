// Problem Link: https://codeforces.com/contest/1968/problem/C

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
    while (t--)
    {
        int n;
        cin >> n;
        ll x[n - 1];
        ll a[n];
        for (int i = 0; i < n - 1; ++i)
            cin >> x[i];
        a[0] = x[0] + 1;
        for (int i = 0; i < n - 1; ++i)
        {
            if (x[i] < a[i])
                a[i + 1] = x[i];
            else
                a[i + 1] = a[i] + x[i];
            if (a[i + 1] % a[i] != x[i])
            {
                a[i] = a[i] + a[i - 1];
                i--;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
