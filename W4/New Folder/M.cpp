// Problem: M. Minimum LCM
// Contest: Codeforces - 2022-2023 ICPC, NERC, Southern and Volga Russian Regional Contest (Online Mirror, ICPC Rules, Preferably Teams)
// URL: https://codeforces.com/contest/1765/problem/M
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-24 20:14:42
// Topic: LCM, number theory
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
ll power(int x, int y){
	ll p = x;
	while(--y) p *= x;
	return p;
}
ll gccd(ll a, ll b){ // a must be smaller than b
	if (b == 0)
		return max(-a, a);
	else {return gccd(b, a%b);} // here b is larger than a%b
									// so it's the 'a' of the next iteration
}
ll lccm(ll a, ll b){
	return (((ll)a*b)/gccd(a,b));
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll n, div = 1; cin >> n;
    if (!(n%2)) return (cout << n/2 << ' ' << n/2), 0;
    vector<ll> pr {1};
	for (ll i = 2; i*i<=n; ++i){
		if (!(n%i)){
			div = n/i;
			break;
		}
	}
    cout << div << ' ' << n-div;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
