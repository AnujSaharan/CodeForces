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
		int n; cin >> n;

		vector<ll int> a;
		vector<ll int> b;

		for (int i = 0; i < n; i++) {
			ll int x; cin >> x;
			a.push_back(x);
		}

		for (int i = 0; i < n; i++) {
			ll int x; cin >> x;
			b.push_back(x);
		}

		ll int a_min = *min_element(a.begin(), a.end());
		ll int b_min = *min_element(b.begin(), b.end());

		ll int cnt = 0;

		for (int i = 0; i < a.size(); i++) {
			ll int ta = a[i] - a_min;
			ll int tb = b[i] - b_min;

			if (ta > 0 && tb > 0) {
				if (ta > tb) {
					cnt += tb;
					cnt += ta - tb;
				} else if (ta < tb) {
					cnt += ta;
					cnt += tb - ta;
				} else {
					cnt += ta;
				}
			} else if (tb > 0) {
				cnt += tb;
			} else {
				cnt += ta;
			}
		}

		cout << cnt << endl;
	}

}
