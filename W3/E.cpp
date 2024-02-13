// Problem: E - The Pharaohs
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
	ll n;
	cin >> n;
	ll l = 1, r = INT_MAX, m, res;
	while(l<= r){
		m = (l+r)/2;
		if (n <= (m*(m+1))/2){
			res = m;
			r = m-1;
		}
		else l = m+1;
	}
	cout << res;
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
