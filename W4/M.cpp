// Problem: M - Coprime
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/M
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// By: Sakura Yamauchi
// When: 2024-02-21 01:11:55
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
int gccd(int a, int b){
	if (!b) return a;
	return gccd(b, a%b);
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, tmp; cin >> n;
    map<int, int, greater<int>> mp;
    map<int, int> mmp;
    set<int> ste;
    int mx = -1;
    vector<pair<int, int>> v;
    forn(i,1,n+1){
    	cin >> tmp;
    	if (!ste.count(tmp)){
    		mp[i] = tmp;
    		mmp[tmp] = i;
    	}
    		
    	else{
    		mp.erase(mmp[tmp]);
    		mp[i] = tmp;
    	}
    	ste.insert(tmp);
    }
    for (auto [x, y] : mp){
    	v.pb({x, y});
    }
    for (auto [x, y] : v) cout << x << ' ' << y << endl;
    forn(i, 0, n){
    	
    }
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
