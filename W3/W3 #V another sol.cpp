// Problem: V - Mex Min
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/V
// Memory Limit: 1024 MB
// Time Limit: 4000 ms
// By: Sakura Yamauchi
// When: 2024-02-15 21:20:31
// Topic: Two Pointers, Sliding Window
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
    int n, m; cin >> n >> m;
    vector<int> v(n);
    forn(i, 0, n) cin >> v[i];
    multiset<int> ste;
    // calculate the mex for the first time
	int res = INT_MAX, curr = 0;
	forn(i, 0, m){
		ste.insert(v[i]);
	}
    forn(i, 0, n+1){
    	if (ste.find(i) == ste.end()){
    		curr = i; res = i;
    		break;
    	}
    }
    // make a sliding window with length m to find the next mex, res;
    forn(i, m, n){
    	ste.insert(v[i]);
    	ste.erase(ste.find(v[i-m]));
    	if (ste.find(v[i-m]) == ste.end()) curr = min(v[i-m], curr);
    	res = min(res, curr);
    }
    cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
