// Problem Link: https://codeforces.com/contest/216/problem/B

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

bool is_cycle(vector<vector<int>> &enmity, int n, int parent, int src, vector<bool> &visited, int &depth) {
    if (visited[src]) {
        return true;
    }

    visited[src] = true;
    for (auto enemy : enmity[src]) {
        if (enemy != parent) {
            ++depth;
            if(is_cycle(enmity, n, src, enemy, visited, depth)) {
                return true;
            }
        }
    }
    return false;
}


int main() {
    fastIO;
    int n, m, i, j;
    cin >> n >> m;
    vector<vector<int>> enmity(n);
    vector<bool> visited(n, false);

    FOR(k, 0, m) {
        cin >> i >> j;
        i--; j--;
        enmity[i].push_back(j);
        enmity[j].push_back(i);
    }

    int benched = 0;
    int depth;
    FOR(src, 0, n) {
        if (!visited[src]) {
            depth = 0;
            bool cycle = is_cycle(enmity, n, -1, src, visited, depth);
            if (cycle) {
                benched += (depth % 2 == 1);
            }
        }
    }

    if ((n - benched) % 2 != 0) {
        benched++;
    }

    cout << benched;
    return 0;
}
