// Problem: I - Queries about less or equal elements
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/I
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
    ll n, m, tmp; cin >> n >> m;
    multimap<ll, ll> mpa; ll arr[m];
    forn(i, 0, n){
    	cin >> tmp; mpa.insert({tmp, 1});
    }
    forn(i, 0, m) cin >> arr[i];
    ll indx = 1;
    for (auto it = mpa.begin(); it != mpa.end(); ++it){
    	it -> S = indx; indx++;
    }
    for (auto x : arr){
    	auto it = mpa.upper_bound(x);
    	if (it == mpa.begin()) {cout << 0 << ' '; continue;}
    	// else{
    		// if 
    	// }
    	--it;
    	cout << it -> S << ' ';
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
