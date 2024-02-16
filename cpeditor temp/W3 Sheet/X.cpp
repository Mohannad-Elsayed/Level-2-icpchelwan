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
int n, k, ansl = -1, ansr = -1; vector<int> v;
bool validate(int m){
	map<int, int> mp;
	forn(i, 0, m) mp[v[i]]++;
	if (mp.size() <= k){
		ansl = 0; ansr = m-1;
		return true;
	}
	forn(i, m, n){
		mp[v[i]]++;
		mp[v[i-m]]--;
		if (mp[v[i-m]] == 0) mp.erase(v[i-m]);
		if (mp.size() <= k){
			ansl = i-m+1; ansr = i;
			return true;
		}
	}
	return false;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    cin >> n >> k;
    v.resize(n);
    for(auto& e : v) cin >> e;
    int l = 1, r = n, m;
    while(l<=r){
    	m = (l+r)/2;
    	if (validate(m)) l = m+1;
    	else r = m-1;
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
