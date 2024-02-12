#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);

	ll n, tmp, sum = 0, mx = LLONG_MIN; cin >> n;
	
	vector<ll> pfx;
	for (int i=0; i<n; ++i){
		cin >> tmp;
		sum += tmp;
		pfx.push_back(sum);
		mx = max({mx, sum, tmp});
		// cout << mx << 'm';
	}
	if (pfx.size() == 1){
		cout << tmp;
		return 0;
	}
	// for (ll x : pfx) cout << x << ' '; cout << endl;
	ll mn = *pfx.begin();
	for (int i = 1; i<n; ++i){
		ll x = pfx[i];
		mx = max(mx, x - mn);
		mn = min(mn, x);
	}
	cout << mx;
	return 0;
}
