// Problem: AA - Playlist
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/AA
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-15 18:35:44
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
    vector<int> v(n);
    set<int> ste;
    for(auto&e:v)cin>>e;
    int l = 0, r = 0, mxdis = -1, curr_dis = 0;
    while(r<n){
    	if (!ste.count(v[r])){
    		ste.insert(v[r]); curr_dis++;
    		mxdis = max(mxdis, curr_dis);
    		r++;
    	}
    	else{
    		ste.erase(v[l]);
    		l++;
    		curr_dis--;
    	}
    }
    cout << mxdis;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
