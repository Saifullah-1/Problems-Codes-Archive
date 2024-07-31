// Problem Link: https://codeforces.com/contest/450/problem/B

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


ll mod = 10e8 + 7;

ll modulo(ll x) {
    if (x < 0) {
        return modulo(x + mod);
    }
    return x % mod;
}
int main() {
    fastIO;
    ll x, y, n, next;
    cin >> x >> y;
    cin >> n;
    if (n == 1) {
        cout << modulo(x);
    } else if (n == 2) {
        cout << modulo(y);
    } else {
        ll ans[] = {y - x, -x, -y, -y + x, x, y};
        cout << modulo(ans[(n - 3) % 6]);
    }

    return 0;
}
