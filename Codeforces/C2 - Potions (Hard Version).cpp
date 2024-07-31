#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int main() {
    fastIO
    int n;
    cin >> n;
    vector<int> potions(n);
    for (int i = 0; i < n; i++) {
        cin >> potions[i];
    }

    ll health = 0;
    int count = 0;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++) {
        // cerr << "health = " << health << "   count = " << count << "  potions[" << i << "] = " << potions[i] << endl;
        if (health + potions[i] >= 0) {
            health += potions[i];
            count++;
            pq.push(potions[i]);
        } else if (!pq.empty() && potions[i] > pq.top()) {
            health += potions[i] - pq.top();
            pq.pop();
            pq.push(potions[i]);
        }
        // cerr << "health = " << health << "   count = " << count << "  top = " << pq.top() << endl;
    }

    cout << count << endl;

    return 0;
}
