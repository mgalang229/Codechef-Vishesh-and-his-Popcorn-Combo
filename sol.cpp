#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int best = INT_MIN;
		// find the largest sum
		for (int i = 0; i < 3; i++) {
			int x, y;
			cin >> x >> y;
			best = max(best, x + y);
		}
		cout << best << '\n';
	}
	return 0;
}
