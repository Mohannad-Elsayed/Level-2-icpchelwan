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
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
	ll n; cin >> n;
	ll sum = 0;
	for (ll i = 1; i*i<=n; ++i){
		if (!(n%i)){
			sum += i;
			if (n/i != i) sum += (n/i);
		}
	}
	cout << sum-n;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
