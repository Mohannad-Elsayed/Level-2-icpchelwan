// Problem: B. Ten Words of Wisdom
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-24 13:39:02
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
    int n; cin >> n;
    int res, mx = INT_MIN;
    forn(i, 1, n+1){
    	int l, r; cin >> l >> r;
    	if (l <= 10){
    		if (r > mx){
    			res = i;
    			mx = r;
    		}
    	}
    }
    cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
