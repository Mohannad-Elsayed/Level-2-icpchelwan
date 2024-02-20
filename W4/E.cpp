// Problem: E - T-primes
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-19 14:35:28
// Topic: Divisibility
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
bool isprime(ll n){
	if (n < 2) return false;
	if (n == 2 || n == 3) return true;
	for (ll i = 2; i*i<=n; ++i){
		if (!(n%i)) return false;
	}
	return true;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll n; cin >> n;
    bool yess = false;
    double sq = sqrt(n);
    if (fabs((ll)(((ll)sq) * ((ll)sq)) -  n) <= 1e-6 && isprime((ll)sq)) yess = true;
    if (n == 1) yess = false;
    // cout << isprime((ll)sq);
    // cout << n <<  "   ";
    yess ? cout << "YES" : cout << "NO";
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
