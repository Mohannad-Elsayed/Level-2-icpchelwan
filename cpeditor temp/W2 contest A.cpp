// Problem: A - Word Game
// Contest: Virtual Judge - Contest #2
// URL: https://vjudge.net/contest/609127#problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
// #define int long long int
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
    int n; cin >> n;
    vector<int> res(3);
    map<string, int> mp; string arr[3][n];
    forn(i, 0, 3){
    	forn(j, 0, n){
    		string s; cin >> s;
    		// cout << s;
    		arr[i][j] = s;
    		if (mp.count(s)) mp[s]++;
    		else mp[s] = 1;
    	}
    }
  	forn(i, 0, 3){
  		forn(j, 0, n){
  			if (mp[arr[i][j]] == 2) res[i]++;
  			else if (mp[arr[i][j]] == 1) res[i] += 3;
  		}
  	}
  	for (auto x : res) cout << x << ' ';
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
