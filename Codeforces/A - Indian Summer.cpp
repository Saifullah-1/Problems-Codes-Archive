#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double dl;
#define all(x) (x).begin(), (x).end()

#define nl cout << endl;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)

#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl

int main() {
    fastIO
    int n; cin >> n;
    unordered_set<string> us;
    string st;
    getline(cin, st);

    while (n--) {
        getline(cin, st);
        us.insert(st);
    }

    cout << us.size();

    return 0;
}
