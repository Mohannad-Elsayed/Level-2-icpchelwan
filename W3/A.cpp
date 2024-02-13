// Problem: A - Binary Search 101
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/A
// Memory Limit: 64 MB
// Time Limit: 1000 ms
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
    ll a, b, k; cin >> a >> b >> k; 
    ll l = a, r = b, m, cnt = 0;
    while(l<=r){
    	++cnt;
    	m = (l+r)/2;
    	// cout << m << endl;
    	if (m>k) r = m-1;
    	else if (m<k) l = m+1;
    	else break;
    }
    cout << cnt;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
