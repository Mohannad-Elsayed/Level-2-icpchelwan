// Problem: I - k-rounding
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/I
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-20 23:31:00
// Topic: LCM
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
	else return gccd(b, a%b);
}
ll lccm(ll a, ll b){
	return (a*b)/(gccd(a, b));
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll n, k; cin >> n >> k;
    ll mul = 1;
    while(k--) mul *= 10;
    cout << lccm(mul, n);
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
