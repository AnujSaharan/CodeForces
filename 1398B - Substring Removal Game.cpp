#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		string s; cin >> s;
		vector<char> c;

		for (char const &x : s ) {
			c.push_back(x);
		}

		vector<int> freq;
		int cnt = 0;
		for (int i = 0; i < c.size(); i++) {
			if (c[i] == '0') {
				freq.push_back(cnt);
				cnt = 0;
			} else if (i == c.size() - 1) {
				cnt++;
				freq.push_back(cnt);
			} else {
				cnt++;
			}
		}
		sort(freq.begin(), freq.end(), greater <>());
		int ans = 0;
		for (int i = 0; i < freq.size(); i += 2) {
			ans += freq[i];
		}
		cout << ans << '\n';
	}
}
