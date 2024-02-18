// Problem: D. Card Game
// Contest: Codeforces - Codeforces Round 927 (Div. 3)
// URL: https://codeforces.com/contest/1932/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-18 15:40:56
// Topic: 
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define ys cout << "YES";
#define im cout << "IMPOSSIBLE";
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
    char super; cin >> super;
    map<char, set<int>> mp;
    set<int> ssuper;
    // cout << n << ' ' << super;
    forn(i, 0, 2*n){
    	int w; char ch; 
    	cin >> w >> ch;
    	// cout << w << ' ' << ch << endl;
    	if (!(ch == super)) mp[ch].insert(w);
    	else ssuper.insert(w);
    	
    }
    for(auto [x, y] : mp){
    	cout << x << ' ';
    	for (auto xx : y) cout << xx << ' ' ;
    	while(!y.empty()){
    		if (y.size() != 1){
    			cout << x << *y.rbegin() << ' ';
    			y.erase(*y.rbegin());
    			cout << x << *y.rbegin() << ' ';
    			y.erase(*y.rbegin());
    		}
    		else{
    			if 
    		}
    	}
    }
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
