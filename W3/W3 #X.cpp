// Problem: X - Longest k-Good Segment
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/X
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-15 18:53:08
// Topic: Two pointers, Variable-sized sliding window
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
    int n, k, ansl = -1, ansr = -1, mxlen = INT_MIN; 
    cin >> n >> k;
    vector<int> v(n);
    for(auto& e : v) cin >> e;
    map<int, int> mp;
    int l = 0, r = 0;
    while(r<n){
    	if (mp.size() <= k){
    		mp[v[r]]++;
    		if (mp.size() <= k && r-l+1 > mxlen){
			// cout << "# -> " << l << ' ' << r << endl;
			// for(auto [x, y] : mp) cout << x << ' ' << y << endl; cout << endl;
    			ansl = l; ansr = r;
    			mxlen = r-l+1;
    		}
    		r++;
    	}
    	else{
    		mp[v[l]]--;
    		if (mp[v[l]] == 0) mp.erase(v[l]);
    		l++;
    	}
    }
    cout << ansl+1 << ' ' << ansr+1;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
