// Problem: AB - Burglar and Matches
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/AB
// Memory Limit: 64 MB
// Time Limit: 500 ms
// By: Sakura Yamauchi
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
    ll n, m, ttt, tttt; cin >> n >> m;
    vector<pair<int,int>> v;
    while(m--){
    	cin >> ttt >> tttt;
    	v.pb(make_pair(tttt, ttt));
    }
    sort(all(v), greater<>());
    ll sum = 0;
    for (auto [x, y] : v){
    	if (n==0) break;
    	if (n >= y){
    		sum += (x*y);
    		n -= y;
    		// cout << n << ' ' << x << ' ' << y << endl;
    	}
    	else{
    		sum += (n*(x));
    		n = 0;
    	}
    }
    cout << sum;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
