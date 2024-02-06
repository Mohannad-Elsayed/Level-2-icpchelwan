#include <bits/stdc++.h>
using namespace std;

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
		
	int n; cin >> n;
	vector<string> v;
	while(n--){
		string s; cin >> s;
		v.push_back(s);
	}
	set<string> st;
	for (auto it = v.rbegin(); it != v.rend(); ++it){
		if (st.count(*it)) continue;
		cout << *it << '\n';
		st.insert(*it);
	}
	return 0;
}
