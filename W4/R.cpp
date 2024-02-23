// Problem: R - Number of common divisors
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/R
// Memory Limit: 1536 MB
// Time Limit: 600 ms
// By: Sakura Yamauchi
// When: 2024-02-20 20:50:03
// Topic: GCD, Prime Factorization
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
ll gccd(ll a, ll b){
	if (!b) return a;
	return gccd(b, a%b);
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll n, m; cin >> n >> m;
    ll _gcd_ = gccd(n, m);
    int cnt = 1;
    if (_gcd_ == 1) return (cout << cnt), 0;
    for (ll i = 2; i*i<=_gcd_; ++i){
    	if 
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
