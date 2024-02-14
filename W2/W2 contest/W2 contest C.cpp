// Problem: C - Songs Compression
// Contest: Virtual Judge - Contest #2
// URL: https://vjudge.net/contest/609127#problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
// #define int long long int
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll n, m, suma = 0, tn, sumb = 0; cin >> n >> m; tn = n;
    multiset<ll> mste;
    while(tn--){
    	ll a, b; cin >> a >> b;
    	suma += a; sumb += b;
    	mste.insert((a-b));
    }
    
    // cout << suma << ' ' << sumb;
    if (sumb > m) { cout << -1; return 0; }
    else if (suma <= m) { cout << 0; return 0;}
    auto it = mste.rbegin();
    ll i;
    for (i = 1; i<=n; ++i){
    	suma -= *it;
    	if (suma <= m) break;
    	++it;
    }
    cout << i;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
