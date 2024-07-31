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

void DFS(vector<vector<int>> &p, int n, int i, vector<int> &depth, vector<bool> &visited) {
    visited[i] = true;
    FOR(j, 0, n) {
        if (p[i][j] != -1) {
            if (!visited[j]) {
                DFS(p, n, j, depth, visited);
            }
            depth[i] = max(depth[i], depth[j] + 1);
        }
    }
}

int main()
{
    fastIO;
    int n, j;
    cin >> n;
    vector<vector<int>> p(n, vector<int>(n));
    vector<int> depth(n, 0);
    vector<bool> visited(n, false);

    FOR(i, 0, n) {
        fill(p[i].begin(), p[i].end(), -1);
    }

    FOR(i, 0, n) {
        cin >> j;
        if (j != -1) {
            p[i][j - 1] = 1;
        }
    }

    FOR(i, 0, n) {
        if (!visited[i])
            DFS(p, n, i, depth, visited);
    }
    cout << *max_element(depth.begin(), depth.end()) + 1;
    return 0;
}

