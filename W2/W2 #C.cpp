#include <bits/stdc++.h>
using namespace std;

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
		
	int n, q, tmp;
	cin >> n >> q;
	multiset<int> mst;
	while(n--){
		cin >> tmp;
		mst.insert(tmp);
	}
	while(q--){
		if (mst.empty()){
			cout << -1 << '\n';
			continue;
		}
		cin >> tmp;
		auto it = mst.lower_bound(tmp);
		if (it == mst.begin() && *it != tmp) cout << -1;
		else{
			if (tmp == *it){
				cout << tmp;
				mst.erase(it);
			}
			else{
				cout << *(--it);
				mst.erase(it);
				
			}
		}
		cout << '\n';
	}
	return 0;
}
