// Problem: D - Number Factorization
// Contest: Virtual Judge - Contest #4
// URL: https://vjudge.net/contest/610910#problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-25 22:41:51
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
    ll n; cin >> n;
    map<int, int> mp;
    for (ll i = 2; i*i<=n; ++i){
    	while(!(n%i)){
    		n/=i;
    		mp[i]++;
    	}
    }
    if (n!=1) mp[n]++;
    
    // for (auto [x, y] : mp) cout << x << ' ' << y << ' '; cout << '\n';
    
    ll sum = 0;
    while(!mp.empty()){
    	ll mul = 1;
	    for (auto it = mp.begin(); it != mp.end(); ++it){
	    	if (it -> second != 0){
		    	mul *= (it -> first);
		    	it -> second -= 1;
		    }
	    }
	    // cout << mul << '\n';
	    if (mul == 1) break;
	    sum += mul;
    }
    cout << sum;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
