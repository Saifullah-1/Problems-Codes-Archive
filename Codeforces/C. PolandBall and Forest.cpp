#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define endl '\n'
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), (x).rend()

const int MAX = 1e4;
int n;
vector< vector<int> > adj(MAX);
vector< bool > visited(MAX);

void dfs(int src) {
    stack< int > st;
    st.push(src);
    while(!st.empty()) {
        int node = st.top();
        st.pop();
        visited[node] = true;
        for (auto& neighbour : adj[node]) {
            if (!visited[neighbour])
                st.push(neighbour);
        }
    }
}

void solve() {
    cin >> n;
    int temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        temp--;
        adj[temp].push_back(i);
        adj[i].push_back(temp);
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            dfs(i);
            cnt++;
        }
    }
       cout << cnt << endl;
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
