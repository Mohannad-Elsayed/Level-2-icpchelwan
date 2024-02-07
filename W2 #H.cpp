#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
		
	ll tn, n, tmp, sum = 0, mx = LLONG_MIN; 
	cin >> n; tn = n;
	vector<pair<ll, ll>> pfx; vector<ll> input;
	for(int i = 1; i<=n; ++i){
		cin >> tmp; input.push_back(tmp);
		sum += tmp; pfx.push_back(make_pair(sum, i));
		mx = max({mx, sum, tmp});
	}
	sort(pfx.begin(), pfx.end());
	
	
	// cout << "Pfx: ";
	// for (auto x : pfx) cout << x.first << ' '; cout << endl;
	
	
	
	auto fixd = pfx.rbegin();
	for (auto it = pfx.begin(); it != pfx.end()-1; ++it){
		if ((it -> second) < (fixd -> second)){
			ll val = fixd -> first - it -> first;
			mx = max(mx, val);
			break;
		}
	}
	
	auto fixd2 = pfx.begin();
	for (auto it = pfx.rbegin(); it != pfx.rend()+1; ++it){
		if ((it -> second) > (fixd -> second)){
			ll val = (it -> first) - (fixd -> first);
			mx = max(mx, val);
			break;
		}
	}
	
	cout << mx;
	return 0;
}
