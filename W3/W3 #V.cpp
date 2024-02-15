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
	
	/*
	// BF solution
	forn(i, 0, n-m+1){
		int curr = INT_MAX;
		multiset<int> sub;
		forn(j, i, i+m){
			sub.insert(v[j]);
		}
		forn(j, 0, n+1){
			if (sub.find(j) == sub.end()){
				curr = min(curr, j);
				break;
			}
		}
		res = min(res, curr);
		if (!res) return (cout << 0), 0;
	}
    */
    
    map<int, int> mp;
    // calculate the mex for the first time
	int res = INT_MAX, curr = 0;
	forn(i, 0, m){
		mp[v[i]]++;
	}
    forn(i, 0, n+1){
    	if (mp.find(i) == mp.end()){
    		curr = i; res = i;
    		break;
    	}
    }
    if (!res) return (cout << 0), 0;
    forn(i, m, n){
    	if (v[i] == v[i-m]) continue;
    	mp[v[i]]++;
    	mp[v[i-m]]--;
    	if (mp[v[i-m]] == 0) curr = min(v[i-m], curr);
    	res = min(curr, res);
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
