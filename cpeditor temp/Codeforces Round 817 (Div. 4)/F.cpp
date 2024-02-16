// Problem: F. L-shapes
// Contest: Codeforces - Codeforces Round 817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/F
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-16 15:28:33
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
    int n, m; cin >> n >> m;
    char arr[n][m];
    forn(i, 0, n){
    	forn(j, 0, m) cin >> arr[i][j];
    }

	 forn(i, 0, n){
    	forn(j, 0, m){
    		if (arr[i][j] == '*'){ // find all possible L shapes
    			int cnt = 0; set<pair<int, int>> ste;
    			// if above
    			if (i-1 > -1 && arr[i-1][j] == '*'){ 
    				if (j+1 < m && arr[i-1][j+1] == '*'){ // if right
    					cnt++;
    					ste.insert({i, j});
    					ste.insert({i-1, j});
    					ste.insert({i-1, j+1});
    				}
    				if (j-1 > -1 && arr[i-1][j-1] == '*'){ // if left
    					cnt++;
    					ste.insert({i, j});
    					ste.insert({i-1, j});
    					ste.insert({i-1, j-1});
    				}
    			}
    			// if below
    			if (i+1 < n && arr[i+1][j] == '*'){ 
    				if (j+1 < m && arr[i+1][j+1] == '*'){ // if right
    					cnt++;
    					ste.insert({i, j});
    					ste.insert({i+1, j});
    					ste.insert({i+1, j+1});
    				}
    				if (j-1 > -1 && arr[i+1][j-1] == '*'){ // if left
    					cnt++;
    					ste.insert({i, j});
    					ste.insert({i+1, j});
    					ste.insert({i+1, j-1});
    				}
    			}
    			// if right
    			if (j+1 < m && arr[i][j+1] == '*'){
    				if (i-1 > -1 && arr[i-1][j+1] == '*'){ // if above
    					cnt++;
    					ste.insert({i, j});
    					ste.insert({i, j+1});
    					ste.insert({i-1, j+1});
    				}
    				if (i+1 < n && arr[i+1][j+1] == '*'){ // if below
    					cnt++;
    					ste.insert({i, j});
    					ste.insert({i, j+1});
    					ste.insert({i+1, j+1});
    				}
    			}
    			// if left
    			if (j-1 > -1 && arr[i][j-1] == '*'){
    				if (i-1 > -1 && arr[i-1][j-1] == '*'){ // if above
    					cnt++;
    					ste.insert({i, j});
    					ste.insert({i, j-1});
    					ste.insert({i-1, j-1});
    				}
    				if (i+1 < n && arr[i+1][j-1] == '*'){ // if below
    					cnt++;
    					ste.insert({i, j});
    					ste.insert({i, j-1});
    					ste.insert({i+1, j-1});
    				}
    			}
    			// left + above
    			if (i-1 > -1 && j-1 > -1 && arr[i][j-1] == '*' && arr[i-1][j] == '*'){
    				cnt++;
					ste.insert({i, j});
					ste.insert({i, j-1});
					ste.insert({i-1, j});
    			}
    			// right + above
    			if (i+1 < n && j-1 > -1 && arr[i][j-1] == '*' && arr[i+1][j] == '*'){
    				cnt++;
					ste.insert({i, j});
					ste.insert({i, j-1});
					ste.insert({i+1, j});
    			}
    			// right + down
    			if (i+1 < n && j+1 < m && arr[i][j+1] == '*' && arr[i+1][j] == '*'){
    				cnt++;
					ste.insert({i, j});
					ste.insert({i, j+1});
					ste.insert({i+1, j});
    			}
    			// left + down
    			if (i-1 > -1 && j+1 < m && arr[i][j+1] == '*' && arr[i-1][j] == '*'){
    				cnt++;
					ste.insert({i, j});
					ste.insert({i, j+1});
					ste.insert({i-1, j});
    			}
    			// cout << cnt;
    			if (!cnt) return (cout << "NO"), 0;
    			if (cnt > 1) return (cout << "NO"), 0;
    			bool flag = true;
    			for (auto [x, y] : ste){
    				// cout << endl << x << ' ' << y << endl;
    				if (x-1 > -1 && arr[x-1][y] == '*' && (!ste.count({x-1, y}))){
    					flag = false;
    				}
    				if (x+1 < n && arr[x+1][y] == '*' && (!ste.count({x+1, y}))){
    					flag = false;
    				}
    				if (y+1 < m && arr[x][y+1] == '*' && (!ste.count({x, y+1}))){
    					flag = false;
    				}
    				if (y-1 > -1 && arr[x][y-1] == '*' && (!ste.count({x, y-1}))){
    					flag = false;
    				}
    				
    				if (y-1 > -1 && x-1 > -1 && arr[x-1][y-1] == '*' && (!ste.count({x-1, y-1}))){
    					flag = false;
    				}
    				if (y+1 < m && x-1 > -1 && arr[x-1][y+1] == '*' && (!ste.count({x-1, y+1}))){
    					flag = false;
    				}
    				if (y+1 < m && x+1 < n && arr[x+1][y+1] == '*' && (!ste.count({x+1, y+1}))){
    					flag = false;
    				}
    				if (y-1 > -1 && x+1 < n && arr[x+1][y-1] == '*' && (!ste.count({x+1, y-1}))){
    					flag = false;
    				}
    				
    				if (!flag) return (cout << "NO"), 0;
    			}
    		}
    	}
    }   
    ys
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
