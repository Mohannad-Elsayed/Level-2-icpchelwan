// Problem: C. Find B
// Contest: Codeforces - Educational Codeforces Round 162 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1923/problem/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// By: Sakura Yamauchi
// When: 2024-02-23 17:54:51
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
    ll n, q; cin >> n >> q;
    ll arr[n];
    forn(i, 0, n) cin >> arr[i];
    ll pfx[n+1]; pfx[0] = 0; pfx[1] = arr[0];
    forn(i, 2, n+1) pfx[i] = pfx[i-1] + arr[i-1];
    // forn(i, 0, n+1) cout << pfx[i] << ' ';
    while(q--){
    	ll l, r; cin >> l >> r;
    	ll inter = r-l+1;
    	if (inter == 1){
    		ns cout << '\n';
    		continue;
    	}
    	ll summ = pfx[r] - pfx[l-1];
    	
    	if (summ >= (((inter*(inter-1)))/2)) ys
    	else ns
    	
    	// if (summ > inter*2) ys
    	// else ns
    	cout << "\n "[(!q)];
    	
    	// cout << summ << endl;
    	
    }
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
