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

bool is_digit(char c) {
    int val = c - '0';
    if (val >= 0 && val <= 9) {
        return true;
    }
    return false;
}

int main()
{
    fastIO;
    int t;
    cin >> t;
    int n;
    string s;

    while (t--) {
        cin >> n;
        cin >> s;
        int i = 0;
        for (; i < n - 1; ++i) {
            if (is_digit(s[i])) {
                if (is_digit(s[i + 1]) && s[i] > s[i + 1]) {
                    cout << "NO" << endl;
                    break;
                }
            } else {
                if (is_digit(s[i + 1])) {
                    cout << "NO" << endl;
                    break;
                } else if (s[i] > s[i + 1]) {
                    cout << "NO" << endl;
                    break;
                }
            }
        }

        if (i == n - 1) {
            cout << "YES" << endl;
        }
    }
    return 0;
}