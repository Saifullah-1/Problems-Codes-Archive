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

int main() {
    fastIO;
    ll a, b, d, m, x;
    cin >> a >> b;
    x = lcm(a, b);
    d = x / a - 1;
    m = x / b - 1;
    if (a > b) {
        d++;
    } else {
        m++;
    }

    if (d > m) {
        cout << "Dasha";
    } else if (d < m) {
        cout << "Masha";
    } else {
        cout << "Equal";
    }
    return 0;
}
