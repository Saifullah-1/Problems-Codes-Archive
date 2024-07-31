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
    string s, r;
    int n;
    while (t--)
    {
        r = "";
        cin >> n;
        cin >> s;
        vector<vector<int>> v(26);
        for (int i = 0; i < n; ++i) {
            v[s[i] - 'a'].push_back(i);
        }
        for (int i = 0; i < 26; ++i) {
            if (!v[i].empty()) {
                r.push_back('a' + i);
            }
        }
        // debug(r);
        // for (int i = 0; i < v.size(); ++i) {
        //     for (int j = 0; j < v[i].size(); ++j) {
        //         cout << v[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        for (int i = 0; i < r.size(); ++i) {
            int sym = r.size() - i - 1;
            for (int j = 0; j < v[r[i] - 'a'].size(); ++j) {
                int ind = v[r[i] - 'a'][j];
                s[ind] = r[sym];
            }
        }
        cout << s << endl;
    }
    return 0;
}