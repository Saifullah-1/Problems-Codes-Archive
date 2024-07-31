#include <bits/stdc++.h>

using namespace std;

// Shortcuts for commonly used data types
typedef long long ll;
typedef long double dl;
#define all(x) (x).begin(), (x).end()

// Macros for iteration
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)

// Input/output macros
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

ll slv(ll n) {
    ll ans = 1;
    if (n % 2 == 0 && n > 3) {
        for (ll i = n; i >= n - 5 && i > 0; --i) {
            for (ll j = i - 1; j >= n - 5 && j > 0; --j) {
                for (ll k = j - 1; k >= n - 5 && k > 0; --k) {
                    ans = max(lcm(lcm(i, j), k), ans);
                }
            }
        }
    } else {
        for (int i = 0; i < 3 && n - i > 0; ++i) {
            ans *= n - i;
        }
    }
    return ans;
}

int main() {
    fastIO;
    ll n;
    cin >> n;

    cout << slv(n);
    return 0;
}