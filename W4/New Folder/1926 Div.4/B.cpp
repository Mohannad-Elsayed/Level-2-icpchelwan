// Problem: B. Vlad and Shapes
// Contest: Codeforces - Codeforces Round 928 (Div. 4)
// URL: https://codeforces.com/contest/1926/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-19 16:38:04
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
    char arr[n][n];
    forn(i, 0, n){
    	forn(j, 0, n){
    		cin >> arr[i][j];
    	}
    }
    
    vector<int> vc;
    int cnt;
    forn(i, 0, n){
    	cnt = 0;
    	forn(j, 0, n){
    		char ch = arr[i][j];
    		if (ch == '1'){
    			cnt++;
    		}
    	}
    	if (cnt > 0) vc.pb(cnt);
    }
    forn(i, 1, (vc.size())){ if (vc[i] != vc[i-1]){
    	return (cout << "TRIANGLE"), 0;
    }}
    cout << "SQUARE";
    // cout << vc.size();
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
