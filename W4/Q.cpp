// Problem: Q - Integer Factorization (15 digits)
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/Q
// Memory Limit: 1536 MB
// Time Limit: 1138 ms
// By: Sakura Yamauchi
// When: 2024-02-19 12:46:52
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
    ll n;
    while(true){
    	cin >> n;
    	if (!n) break;
    	map<ll, ll> mp;
    	while(!(n%2)){
    		n/=2;
    		mp[2]++;
    	}
    	for (ll i = 3; i*i<=n; i+=2){
    		while(!(n%i)){
    			mp[i]++;
    			n /= i;
    		}
    	}
    	if (n>1) mp[n]++;
    	auto itend = mp.end(); itend--;
    	for (auto it = mp.begin(); it != mp.end(); ++it) 
    		cout << (*it).F << '^' << (*it).S << " \0"[(it == itend)]; cout << '\n';
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
