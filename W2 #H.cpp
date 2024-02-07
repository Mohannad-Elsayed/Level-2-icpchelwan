#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
		
	ll n, tmp, sum = 0, mx = LLONG_MIN; cin >> n;
	set<ll> pfx;
	while(n--){
		cin >> tmp;
		sum += tmp;
		pfx.insert(sum);
		if (tmp > mx) mx = tmp;
		// cout << sum << ' ';
	}
	if (pfx.size() == 1){
		cout << *pfx.begin();
		return 0;
	}
	for (ll x : pfx) cout << x << ' '; cout << endl;
	// cout << ((*(pfx.rbegin()))) << ' ' << (*pfx.begin()) << endl;
	ll fl = ((*(pfx.rbegin())) - (*pfx.begin()));
	cout << max(fl, mx);
	return 0;
}
