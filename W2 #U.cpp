// Problem: U - Zular Eclipse
// Contest: Virtual Judge - Week #2
// URL: https://vjudge.net/contest/608666#problem/U
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
// #define int long long int
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define ys cout << "YES";
#define ns cout << "NO";
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    
    int n, q, tmp, cnt = 0; cin >> n;
	map<ll, pair<ll, ll>> mp; ll pfx = 0;
	forn(i, 0, n){
		cin >> tmp;
		if (mp.count(tmp)){
			mp[tmp].first +=  1;
		}
		else mp[tmp].first = 1;
	}
	for (auto [i, j] : mp){
		// i is key || power, j is pfx
		pfx += ((j.first) * i); cnt += j.first;
		mp[i].first = pfx; mp[i].second = cnt;
	}
  
  	// for (auto [i, j] : mp) cout << i << ' ' << 
  							// j.first << ' ' << 
  							// j.second << '\n';
							
  	ll mn = mp.begin() -> first, mx = mp.rbegin() -> first;
  	cin >> q; 
  	// cout << "\nq= " << mn << '\n';
  	while(q--){
  		cin >> tmp;
  		if (tmp < mn){ cout << -1 << '\n'; continue; }
  		else if (tmp > mx){
  			tmp = mx;
  			cout << mp[tmp].second << ' ' << mp[tmp].first << '\n';
  		}
  		else{
  			auto it = mp.lower_bound(tmp);
  			if (it -> first != tmp) --it;
  			cout << it -> second.second << ' ' << it -> second.first << '\n';
  		}
  		
  	}
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
