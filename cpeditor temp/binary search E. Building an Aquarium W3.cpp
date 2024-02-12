// Problem: E. Building an Aquarium
// Contest: Codeforces - Codeforces Round 898 (Div. 4)
// URL: https://codeforces.com/contest/1873/problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
ll n, x; 
vector<ll> v;
bool ok(ll m){
	ll cnt = 0;
	for (auto x : v){
		if (m <= x) continue;
		cnt += (m-x);
		// if (cnt > x) return false;
	}
	return cnt <= x;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    cin >> n >> x;
    v.resize(n);
    for (auto &e : v) cin >> e;
    // cout << v[2] << endl;
    ll l = 0, r = 1e12, mid, res;
    while(l<=r){
    	mid = (l+r)/2;
    	if (ok(mid)){
    		l = mid+1;
    		res = mid;
    	}
    	else r = mid-1;
    	
    }
    cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
