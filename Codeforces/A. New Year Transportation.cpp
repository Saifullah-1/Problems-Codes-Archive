#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define endl '\n'
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), (x).rend()

const int MAX = 3 * 1e4;
int n, t;
vector< vector<int> > adj(MAX);

bool dfs() {
    bool visited[n];
    memset(visited, false, n);
    stack< int > st;
    st.push(0);
    while(!st.empty()) {
        int node = st.top();
        st.pop();
        visited[node] = true;



        for (auto& neighbour : adj[node]) {
            if (!visited[neighbour])
                st.push(neighbour);
            if (neighbour == t)
                return true;
        }
    }

    return false;
}

void solve() {
    cin >> n >> t;
    t--;
    int temp;
    for (int i = 0; i < n - 1; ++i) {
        cin >> temp;
        adj[i].push_back(temp + i);
    }

    dfs() ? cout << "YES" << endl : cout << "NO" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q = 1;
    // cin >> q;
    while (q--) {
        solve();
    }
}
