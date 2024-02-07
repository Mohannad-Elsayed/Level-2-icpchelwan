#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
		
	ll tn, n, tmp, sum = 0, mx = LLONG_MIN; 
	cin >> n; tn = n;
	vector<ll> input, pfx;
	while(tn--){
		cin >> tmp; input.push_back(tmp);
		sum += tmp; pfx.push_back(sum);
		mx = max({mx, sum, tmp});
	}
	auto min_iterator = min_element(pfx.begin(), pfx.end());
	if (*min_iterator == *pfx.rbegin()){
		cout << mx; 
		return 0;
	}
	auto max_iterator = max_element(min_iterator+1, pfx.end());
	ll val = *max_iterator - *min_iterator;
	val > mx ? cout << val : cout << mx;
	return 0;
}
