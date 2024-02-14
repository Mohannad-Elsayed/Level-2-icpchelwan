// Problem: B - Plan
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/B
// Memory Limit: 256 MB
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
    int n, q, tmp; cin >> n >> q;
    map<int, int> mp;
    forn(i, 0, n) {cin >> tmp; mp.insert({tmp, i+1});}
    
    while(q--){
    	cin >> tmp;
	    if (mp.count(tmp)) cout << "Yes " << mp[tmp];
	    else cout << "No";
	    cout << '\n';
    } 
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
