#include <bits/stdc++.h>
using namespace std;

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
		
	int n; cin >> n;
	map<string, int> mp;
	while(n--){
		string s; getline(cin >> ws, s);
		if (mp.count(s)){ cout << s << mp[s] << '\n'; mp[s]++;}
		else{
			mp[s] = 1;
			cout << "OK\n";
		}
		
	}
	return 0;
}
