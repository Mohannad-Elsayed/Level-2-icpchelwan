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
		auto it = ste.lower_bound(num);
		// cout << *it << ' ' << num-k << endl;
		if (it == ste.end() || (*it < num && *it > num+k)){
			it = ste.lower_bound(num-k);
			if (it == ste.end() || (*it < num-k && *it > num) ) continue;
			else{
				++cnt;
		 		// cout << *it << ' ' << num << " here\n";
				ste.erase(it);
			}
		}
		else if (it != ste.end() && (*it >= num && *it <= num+k)){
			++cnt;
			// cout << *it << ' ' << num << " her2e\n";
			ste.erase(it);
		}
	}
	cout << cnt;
	return 0;
}
