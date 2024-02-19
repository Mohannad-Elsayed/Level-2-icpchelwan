// Problem: E - Closest Cities
// Contest: Virtual Judge - Contest #3
// URL: https://vjudge.net/contest/610806#problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-18 20:44:42
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
    int n; cin >> n;
    ll arr[n]; forn(i, 0, n) cin >> arr[i];
    vector<ll> clf, clb;
    clf.pb(0); clf.pb(1);
    forn(i, 1, n-1){
    	((arr[i] - arr[i-1]) > (arr[i+1] - arr[i])) ? clf.pb(1) 
    	: clf.pb(arr[i+1] - arr[i]);
    }
    clb.pb(0);
    forn(i, 1, n-1){
    	((arr[i] - arr[i-1]) < (arr[i+1] - arr[i])) ? clb.pb(1) 
    	: clb.pb(arr[i] - arr[i-1]);
    } clb.pb(1);
    vector<ll> pfxf, pfxb;
    ll sum1 = 0, sum2 = 0;
    forn(i, 0, n){
    	sum2 += clf[i];
    	pfxf.pb(sum2);
    	sum1 += clb[i];
    	pfxb.pb(sum1);
    }
    int q; cin >> q;
    while(q--){
    	int l, r; cin >> l >> r;
    	(l>r) ? cout << pfxb[l-1] - pfxb[r-1] : cout << pfxf[r-1] - pfxf[l-1];
    	cout << '\n';
    }
    // forn(i, 0, n) cout << clf[i] << ' ';
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
