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
   		map<ll, ll> p;
   		while(!(n%2)){
   			n /= 2;
   			if (!p.count(2)) p[2] = 1;
   			else p[2]++;
   		}
   		for (ll i = 3; i*i<=n; i+=2){
   			while(!(n%i)){
   				n /= i;
   				if (!p.count(i)) p[i] = 1;
   				else p[i]++;
   			}
   		}
   		if (n != 1) p[n] = 1;
   		auto ee = p.end(); ee--;
   		for (auto it = p.begin(); it != p.end(); ++it)
   			cout << it -> F << '^' << it -> S << " \n"[(it == ee)];
   		
   		
   		// for (auto [x, y] : p) cout << x << '^' << y << ' '; cout << '\n';
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
