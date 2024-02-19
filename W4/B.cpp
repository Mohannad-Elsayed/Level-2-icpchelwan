// Problem: A - Printing some primes
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/A
// Memory Limit: 1536 MB
// Time Limit: 1325 ms
// By: Sakura Yamauchi
// When: 2024-02-19 13:05:58
// Topic: Primes
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
    int n = 1e5 + 100;
    vector<bool> v(n, true);
    for(int i = 2; i*i<=n; ++i){
    	if (v[i]){
    		for(int j = i*i; j<=n; j+=i){
    			v[j] = false;
    		}
    	}
    }
    int k; cin >> k;
    forn(i, k, n){
    	if (v[i]){
    		cout << i;
        break;
    	}
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
