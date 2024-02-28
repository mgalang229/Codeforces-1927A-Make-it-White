#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int mn = n, mx = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'B') {
			mn = min(mn, i);
			mx = max(mx, i);
		}
	}
	cout << mx - mn + 1 << "\n";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
