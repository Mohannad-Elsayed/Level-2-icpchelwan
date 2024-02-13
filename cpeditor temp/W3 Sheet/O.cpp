// Problem: O - Meeting on the Line
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/O
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
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
int n, tmp; 
vector<pair<int, int>> v;
// ld cost(ld pos){
// 	
// }
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    cin >> n;
    v.resize(n);
	forn(i, 0, n) {cin >> tmp; v[i].F = tmp;}
	forn(i, 0, n) {cin >> tmp; v[i].S = tmp;}
	sort(all(v));
	// ld l = 0, r = dis[n-1], m, pos = 0, curr_dis;
	for (auto [x, y] : v) cout << x << ' ' << y << endl;
	// curr_cost = cost(pos);
	// while(l<=r){
		// m = (l+r)/2;
		// if (cost(pos) < curr_cost){
// 			
		// }
	// }
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
