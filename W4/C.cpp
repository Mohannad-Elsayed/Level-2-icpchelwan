// Problem: C - Keep Dividing
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-19 14:25:25
// Topic: Prime Factorization
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
    int cnt = 0;
    while(!(n%2)){
    	n/=2; 
    	cnt++;
    }
    for(ll i = 3; i*i<=n; i+=2){
    	while(!(n%i)){
	    	n/=i; 
	    	cnt++;
    	}
    }
    if (n>1)++cnt;
    cout << cnt;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
