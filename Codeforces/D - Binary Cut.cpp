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


int
numberOfSlices(string s) {
    int p = 1;
    int x = 0;
    int n = s.length();
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] - '0' > s[i + 1] - '0' && x == 0)
            p++;
        else if (x != 0 && s[i + 1] - '0' != s[i] - '0')
            p++;
        if (s[i + 1] - '0' > s[i] - '0')
            x++;

    }
    return p;
}

int main()
{
     fastIO;
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        cout << numberOfSlices(s) << endl;
    }
     return 0;
}
