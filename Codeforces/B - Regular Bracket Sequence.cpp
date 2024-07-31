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
    string s; cin >> s;
    stack<char> st;
    int len = 0, temp;
    bool OK;
    FOR(i, 0, s.size()) {
        st.push(s[i]);
        if (s[i] == ')') {
            char ch;
            temp = 0;
            OK = false;
            while (!st.empty()) {
                ch = st.top();
                st.pop();
                temp++;
                if (ch == '(') {
                    OK = true;
                    break;
                }
            }
            if (OK)
                len += temp;
        }
    }

    if (len % 2 == 1 && len != 0)
        len--;

    cout << len;
    return 0;
}
