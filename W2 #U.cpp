#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

int main() {ios::sync_with_stdio(0);
			cin.tie(0);
			
	map<int, pair<int, ll>> mp;
	ll n, q; cin >> n; ll arr[n];
	for (int i = 0; i<n; ++i) cin >> arr[i];
	cin >> q; ll que[q];
	for (int i = 0; i<n; ++i) cin >> que[i];
	
	sort(arr, arr+n);
	ll sum = 0, curr_max = 0;
	for (int i = 0; i<n; ++i){
		sum += arr[i]; curr_max = max(curr_max, arr[i]);
		mp[curr_max] = make_pair(i+1, sum);
	}
	// cout << curr_max << endl;
	// for (auto [i, j] : mp) cout << i << " = " << "{ " << j.first << ", " << j.second << "}\n";
	for (auto qq : que){
		if (qq < arr[0]){
			cout << -1;
		}
		else if (qq >= curr_max){
			cout << mp[curr_max].first << ' ' << mp[curr_max].second;
		}
		else{
			auto it = mp.lower_bound(qq);
			if (it -> first != qq) --it;
			cout << it -> second.first << ' ' << it -> second.second;
		}
		cout << '\n';
	}
	return 0;
}
