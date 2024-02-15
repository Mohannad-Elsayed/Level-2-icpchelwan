// Problem: Q - Computer Game
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/Q
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// By: Sakura Yamauchi
// When: 2024-02-15 11:09:50
// Topic: Binary Search
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
ll k, n, a, b;
bool validate(ll m){
	if (k - (b*(n-m) + m*a) > 0) return true;
	else return false;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    cin >> k >> n >> a >> b;
    ll l = 0, r = n, m, res = -1;
    while(l<=r){
    	m = (l+r)/2;
    	if (validate(m)){
    		res = m; 
    		l = ++m;
    	} else r = --m;
    }
    cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
