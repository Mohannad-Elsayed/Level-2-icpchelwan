// Problem: R - Sage's Birthday (hard version)
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/R
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-15 17:39:47
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
    int n, cnt = 0; cin >>n; vector<int> v(n), ans;
    for(auto& e : v) cin >> e;
    sort(all(v));
    int mn = 1, mx = n-1;
    forn(i, 1, n){
    	if ((i%2))
    	ans.pb(v[mx--]);
    	else
    	ans.pb(v[mn++]);
    }
    if(n>2) 
    	ans.insert((ans.begin()+n-2), v[0]);
    else ans.pb(v[0]);
    forn(i, 1, n-1){
    	if (ans[i] < ans[i-1] && ans[i] < ans[i+1]) ++cnt;
    }
    cout << cnt << '\n';
    for(auto x : ans) cout << x << ' ';
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
