#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double dl;
#define endl '\n'
#define all(x) (x).begin(), (x).end()

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)

#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl

void solve() {
    unordered_set<char> us;
    char ch;
    do {
        cin >> ch;
        if (isalpha(ch)) {
            us.insert(ch);
        }
    } while (ch != '}');

    cout << us.size();
}

int main()
{
    fastIO;
    solve();
    return 0;
}