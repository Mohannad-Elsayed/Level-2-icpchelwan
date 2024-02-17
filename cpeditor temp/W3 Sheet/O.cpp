// Problem: O - Meeting on the Line
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/O
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// Topic: Binary search, ternary search
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
int n; 
vector<pair<int, int>> v;
ld validate(ld m){
	ld res = 0;
	for (auto [x, y] : v){
		res = max((fabs(x-m) + y), res);
	}
	return res;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    cin >> n;
    v.resize(n);
    forn(i, 0, n) cin >> v[i].F;
    forn(i, 0, n) cin >> v[i].S;
    sort(all(v));

    ld l = v[0].F, r = v[n-1].F, m, res = r-l+v[n-1].S, ans = -1;
    int iterations = 350;
    forn(i, 0, iterations){
    	m = (l+r)/2;
    	if (validate(m) < validate(m+1e-6)){
    		ans = m; 
    		r = m;
    	} else l = m;
    }
    cout << fixed << setprecision(6) << ans;

    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
