#include <bits/stdc++.h>
using namespace std;

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
		
	int n, q, temp; cin >> n >> q;
	set<int> stt;
	while(n--){
		cin >> temp; stt.insert(temp);
	}
	while(q--){
		cin >> temp;
		auto it = stt.upper_bound(temp);
		if (it == stt.end()) cout << -1;
		else cout << *it;
		cout << '\n';
	}
	return 0;
}
