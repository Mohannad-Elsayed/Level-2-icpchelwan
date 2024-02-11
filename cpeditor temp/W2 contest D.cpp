// Problem: D - Gotta Solve `Em All
// Contest: Virtual Judge - Contest #2
// URL: https://vjudge.net/contest/609127#problem/D
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
#define F first
#define S second
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int o, g, tmp; cin >> o  >> g;
  	set<int> ou, go, all;
  	forn(i, 0, o) {cin >> tmp; ou.insert(tmp); all.insert(tmp);}
  	forn(i, 0, g) {cin >> tmp; go.insert(tmp); all.insert(tmp);}  	
  	for (auto x : all){
  		if (ou.count(x) && go.count(x)){
			ou.erase(x);
			go.erase(x);
		}
  	}
  	// for (auto x : ou) cout  << x <<' ';cout << endl;
  	// for (auto x : go) cout  << x <<' ';cout << endl;
  	
  	int res = min(ou.size(), go.size());
  	cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}