// Problem: C. Vlad and a Sum of Sum of Digits
// Contest: Codeforces - Codeforces Round 928 (Div. 4)
// URL: https://codeforces.com/contest/1926/problem/C
// Memory Limit: 256 MB
// Time Limit: 500 ms
// By: Sakura Yamauchi
// When: 2024-02-19 16:40:51
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
vector<ll> pfx;
ll sumof(ll n){
	ll sum = 0;
	while(n > 0){
		sum += (n%10);
		n/=10;
	}
	return sum;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int tt, tmp; cin >> tt;
    ll sum = 0;
    int nmx = 2*1e5+10;
    pfx.resize(nmx);
    for (ll i = 1; i<nmx; ++i){
    	sum += sumof(i);
    	pfx[i] = sum;
    }
    while(tt--){
    	cin >> tmp;
    	cout << pfx[tmp] << '\n';
    }
    
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
