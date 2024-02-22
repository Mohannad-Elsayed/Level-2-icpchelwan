// Problem: S - Square Difference
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/S
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-22 15:06:17
// Topic: Prime number theory
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
bool isprime(ll a){
	for (ll i = 2; i*i<=a; i++){
		if (!(a%i)) return false;
	}
	return true;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll a, b; 
    cin >> a >> b;
    if (a-b != 1) return (cout << "NO"), 0;
    a += b;
    if (isprime(a)) ys
    else ns
    
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
