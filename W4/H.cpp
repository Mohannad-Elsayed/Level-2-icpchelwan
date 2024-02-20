// Problem: H - Divisor Summation
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/H
// Memory Limit: 1536 MB
// Time Limit: 3000 ms
// By: Sakura Yamauchi
// When: 2024-02-19 15:39:18
// Topic: Divisors
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
// vector<ll> v(5*1e5+10);
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
	// forn(i, 2, 500010){
		ll n; cin >> n;
		ll sum = 1;
		for (ll j = 2; j * j <= n; ++j){
			if (!(n%j)){
				sum += j;
				if (j != n/j)
					sum += n/j;
			}
		}
		// v[i] = sum;
	// }
	// forn(i, 1, 5*1e5+10){
		// cout << i << ' ' << v[i] << endl;
	// }
	if (n == 1) sum = 0;
	cout << sum;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n\0"[(t==0)];}return 0;}
