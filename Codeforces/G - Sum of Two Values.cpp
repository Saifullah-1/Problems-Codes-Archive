#include <bits/stdc++.h>

#define int long long int
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

#include <bits/stdc++.h>
using namespace std;

signed main() {
	int n, x;
	cin >> n >> x;

	vector<pair<int, int>> indexes;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		indexes.push_back({temp, i});
	}

	sort(indexes.begin(), indexes.end());

    bool found = false;
	int i = 0;
	int j = n - 1;
	while (i < j) {
		if (indexes[i].first + indexes[j].first > x) {
			j--;
		} else if (indexes[i].first + indexes[j].first < x) {
			i++;
		} else if (indexes[i].first + indexes[j].first == x) {
			cout << indexes[i].second + 1 << " " << indexes[j].second + 1 << endl;
			found = true;
            break;
		}
	}

	if (!found) cout << "-1" << endl;
}