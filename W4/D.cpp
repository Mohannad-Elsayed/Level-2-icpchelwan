// Problem: D - Use Sieve if you can
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-19 14:30:10
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
    ll n, p; cin >> n >> p;
    map<ll, ll> primes;
    while (!(n%2)){
    	n/=2;
    	primes[2]++;
    }
    for (ll i = 3; i*i<=n; i+=2){
	    while (!(n%i)){
	    	n/=i;
	    	primes[i]++;
	    }
    }
    if (n>1) primes[n]++;
    cout << primes.size() << '\n';
    for (auto [x, y] : primes){
    	cout << x << ' ' << y*p << '\n';
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
