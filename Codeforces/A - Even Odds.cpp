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
     ll n, k;
     cin >> n >> k;
     ll odds, evens;
     if (n % 2 == 0) {
         evens = n / 2;
         odds = evens;
     } else {
         odds = n / 2 + 1;
         evens = odds - 1;
     }

     if (k <= odds)
         cout << 2 * k - 1 << endl;
     else
         cout << 2 * (k - odds) << endl;
     return 0;
}
