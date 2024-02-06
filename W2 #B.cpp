#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
		
	ll n, m, k;
	cin >> n >> m >> k;
	int cnt = 0, tmp; vector<int> v;
	multiset<int> ste;
	while(n--){
		cin >> tmp; v.push_back(tmp);
	}
	while(m--){
		cin >> tmp; ste.insert(tmp);
	}
	
	for (auto num : v){
		if (num-k > *ste.rbegin()) continue;
		auto it = ste.lower_bound(num-k);
		// cout << *it << ' ' << num-k << endl;
		if (*it != num-k && *it > num+k) continue;
		++cnt;
		ste.erase(it);
	}
	cout << cnt;
	return 0;
}
