// Problem: A - Easy Number Challenge
// Contest: Virtual Judge - Contest #4
// URL: https://vjudge.net/contest/610910#problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-25 20:00:54
// Topic: 
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
#define pb push_back
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll res = 0;
    ll a, b, c;
    cin >> a >> b >> c;
    unordered_map<ll, ll> mp;
    forn(i, 1, a+1){
    	forn(j, 1, b+1){
    		forn(k, 1, c+1){
    			ll val = i*j*k;
				ll divv = 2;
    			if (val == 1) { res += 1; continue; }
    			if (mp.count(val)) res += mp[val];
    			else {
    				for (ll d = 2; d*d<=val; ++d){
	    				if (!(val%d)){
	    					divv++;
	    					if (val/d != d) divv++;
	    				}
	    			}
		    		mp[val] = divv;
	    			res += divv;
	    		}
	    		// cout << val << ' ' << divv << '\n';
    			if (res > 1073741824) res %= 1073741824;
    			// cout << res << '\n';
    		}
    	}
    }
    
    cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
