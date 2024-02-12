#include <bits/stdc++.h>
using namespace std;

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
		
	int n, q, temp;
	cin >> n >> q;
	map<int, int> mp;
	for(int i = 1; i<=n; ++i){
		cin >> temp;
		mp[temp] = i;
	}
	while(q--){
		cin >> temp;
		if(mp.count(temp)) cout << "Yes " << mp[temp];
		else cout << "No";
		cout << '\n';
	}
	return 0;
}
