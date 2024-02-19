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
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll n, cnt; cin >> n;
    bool yess = false;
    if (n>1e5){
	    double sq = sqrt(n);
	    if (fabs((ll)(((ll)sq) * ((ll)sq)) -  n) <= 1e-6) yess = true;
	    if (n == 1) yess = false;
	}
	else{
		cnt = 0;
    for (ll i = 1; i*i<=n; ++i){
    	if (!(n%i)){
	    		if (n/i == i) ++cnt;
	    		else cnt+=2;
    		}
    	}
	}
	if (cnt == 3) yess = true;
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
