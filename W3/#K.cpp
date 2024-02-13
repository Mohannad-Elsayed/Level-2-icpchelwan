// Problem: K - Megacity
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/K
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
ld dis(ll x, ll y){
	return sqrt(x*x+y*y);
}
ll n, pop, tmp, sum = 0, x, y, diff;
vector<pair<ld, ll>> v; // distance and population so far
bool pass(ld m){
	ll sum = 0;
	for (auto x : v){
		if (x.F > m) break;
		sum += x.S;
		if (sum >= diff) return true;
	}
	return false;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
	cin >> n >> pop;
    diff = 1e6 - pop;
    forn(i, 0, n){
    	cin >> x >> y >> tmp;
    	sum += tmp;
    	ld distance = dis(x, y);
    // pair with distance and number of people collected at that distance
    	v.push_back(make_pair(distance, tmp)); 
    }
    sort(all(v));
    // for (auto x : v) cout << setprecision(7) << fixed << x.F << ' ' << x.S << endl;
    if (sum < diff) return (cout << -1), 0;
    ld l = 0, r = 1e7, m, res; int iterations = 200;
    while(iterations--){
    	m = (l+r)/2;
    	if (pass(m)){
    		res = m;
    		r = m;
    	} else l = m;
    }
    cout << setprecision(10) << fixed << res;
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
