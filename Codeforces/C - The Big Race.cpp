// Problem Link: https://codeforces.com/contest/592/problem/C

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double dl;
typedef unsigned long long ull;
#define all(x) (x).begin(), (x).end()

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)

#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl

ull gcd(ull a, ull b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ull lcm(ull a, ull b)
{
    return (a / gcd(a, b)) * b;
}

ull slv (ull t, ull w, ull b) {
    ull lcm_ = lcm(w, b);
    ull n = 0;

    if (t / b >= w / gcd(w, b)) {
        n = (t / lcm_) * min(w, b) + min(min(w, b), t % lcm_ + 1) - 1;
    } else {
        n = min(min(w, b), t + 1) - 1;
    }
    return n;
}

int main() {
    fastIO;
    ull t, w, b, n, gcd_;
    cin >> t >> w >> b;

    n = slv(t, w, b);
    gcd_ = gcd(n, t);
    cout << n / gcd_ << "/" << t / gcd_ << endl;
    return 0;
}


