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

bool belongToInterval(int x, int a, int b) {
    return (x >= min(a, b)) && (x <= max(a, b));
}

int ind;
bool allSameLetter(string s) {
    if (s.length() == 1)
        return true;
    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i + 1] != s[i]) {
            ind = i + 1;
            return false;
        }
    }
    return true;
}

int main()
{
     fastIO;
     int t, x, y;
     cin >> t;
     while (t--) {
         cin >> x >> y;
         cout << min(x, y) << " " << max(x, y) << endl;
     }
     return 0;
}
