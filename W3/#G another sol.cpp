// Problem: G - Worms
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/G
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
    ll n, tmp, q, tn, pfx = 0; cin >> n; tn = n;
    vector<ll> v;
    while(tn--){
    	cin >> tmp; 
    	pfx += tmp;
    	v.push_back(pfx);
    }
    cin >> q;
    while(q--){
    	cin >> tmp;
    	int l = 0, r = n-1, m, res;
    	while(l<=r){
    		m = (l+r)/2;
    		if (tmp <= v[m]){
    			res = m;
    			r=m-1;
    		}
    		else l=m+1;
    	}
    	cout << res+1 << '\n';
    	// cout << endl;
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
