// Problem Link: https://codeforces.com/contest/25/problem/C

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

void print(int n, vector<vector<int>> &dist) {
    cout << "---- Matrix ----" << endl;
    FOR(i, 0, n) {
        FOR(j, 0, n) {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

ll dist_sum(int n, vector<vector<int>> &dist) {
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            sum += dist[i][j];
        }
    }
    return sum;
}

void floyd(int n, vector<int> p, vector<vector<int>> &dist) {
    for (int K : p) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][j] > (dist[i][K] + dist[K][j]))
                    dist[i][j] = dist[i][K] + dist[K][j];
            }
        }
    }
}


int main()
{
    fastIO;
    int n, k, a, b, c;
    cin >> n;
    vector<vector<int>> dist(n, vector<int>(n));
    FOR(i, 0, n) {
        FOR(j, 0, n) {
            cin >> dist[i][j];
        }
    }
    cin >> k;
    vector<int> p(2);
    FOR(i, 0, k) {
        cin >> a >> b >> c;
        a--;
        b--;
        p[0] = a;
        p[1] = b;
        if (dist[a][b] > c) {
            dist[a][b] = c;
            dist[b][a] = c;
            floyd(n, p, dist);
        }
        cout << dist_sum(n, dist) << " ";
    }
    return 0;
}
