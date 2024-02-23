// Problem: K - Divide and Equalize
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/K
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-20 23:43:50
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
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll n, tmp; cin >> n;
    map<ll, ll> mp;
    forn(j, 0, n){
    	cin >> tmp;
    	while(!(tmp%2)){
    		tmp/=2;
    		mp[2]++;
    	}
    	for (ll i = 3; i*i<=tmp; i+=2){
    		while(!(tmp%i)){
    			mp[i]++;
    			tmp/=i;
    		}
    	}
    	if (tmp != 1) mp[tmp]++;
    }
    for (auto [x, y] : mp){
    	if (y%n) return (cout << "NO"), 0;
    }
    ys
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
