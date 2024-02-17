// Problem: J - Pair of Topics
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/J
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
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    

    
    // // bf solution to validate the optimized solution
    // ll n, cnt = 0; cin >>n;
    // ll teachers[n], students[n];
    // forn(i, 0, n) cin >> teachers[i];
    // forn(i, 0, n) cin >> students[i];
    // forn(i, 0, n-1){
    	// forn(j, i+1, n){
    		// if (teachers[i] + teachers[j] > students[i] + students[j]) ++cnt;
    	// }
    // }
    // cout << cnt;
    

    
    ll n, cnt = 0; cin >> n;
    pair<ll, ll> a1[n]; 
    forn(i, 0, n) cin >> a1[i].F;
    forn(i, 0, n) cin >> a1[i].S;
    sort(a1, a1+n);
    // for (auto [x, y] : a1) cout << x << ' '; cout << endl;
    // for (auto [x, y] : a1) cout << y << ' '; 
    
    forn(i, 0, n-1){
    	ll l = i+1, r = n-1, m, res = n;
    	while(l<=r){
    		m = (l+r)/2;
    		if (a1[i].F + a1[m].F > a1[i].S + a1[m].S){
    			res = m;
    			r = m-1;
    		} else l = m+1;
    	}
    	cnt += (n-res);
    }
    cout << cnt;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
