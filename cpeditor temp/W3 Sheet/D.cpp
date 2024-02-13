// Problem: D - Zular Eclipse
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll n, tmp, q; cin >> n;
    vector<ll> v(n), pfx(n);
    for(auto &e : v) cin >> e;
    sort(all(v)); pfx[0] = v[0];
    forn(i, 1, n) pfx[i] = pfx[i-1] + v[i];
    cin >> q;
    while(q--){
    	cin >> tmp;
    	ll l = 0, r = n-1, m, res;
    	bool flag = false;
    	while(l<=r){
    		m = (l+r)/2;
    		if (v[m] <= tmp){
    			flag = true;
    			res = m;
    			 l = m+1;
    		}
    		else r = m-1;
    	}
    	flag ? cout << res+1 << ' ' << pfx[res] : cout << -1;
    	cout << '\n';
    }
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
