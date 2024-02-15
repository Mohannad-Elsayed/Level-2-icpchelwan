// Problem: X - Longest k-Good Segment
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/X
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-15 18:53:08
// Topic: Two pointers
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
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (auto& e : v) cin >> e;
    if (k == 1) return (cout << 1 << ' ' << 1), 0;
    int l = 0, r = 0, mx_len = -1;
    pair<int, int> ans; map<int, int> mp;
    while(l<=r && r<n){
    	if (mp.size() <= k){
    		mp[v[r]]++; r++;
    		if (mp.size() == k){
	    		if (r-l+1 > mx_len){
	    			ans.F = l; ans.S = r;
	    			mx_len = r-l+1;
	    		}
    		}
    	}
    	else {
    		mp[v[l]]--;
    		if (mp[v[l]] == 0) mp.erase(v[l]);
    		l++;
    		if (mp.size() == k){
	    		if (r-l+1 > mx_len){
	    			ans.F = l; ans.S = r;
	    			mx_len = r-l+1;
	    		}
    		}
    	}
    }
    cout << ans.F+1 << ' ' << ans.S;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
