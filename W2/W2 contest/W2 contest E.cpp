// Problem: E - Detective Dots Treasure Hunt (Hard Version)
// Contest: Virtual Judge - Contest #2
// URL: https://vjudge.net/contest/609127#problem/E
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
#define lostt {cout << "lost"; return 0;}
#define outt {cout << "out"; return 0;}
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
    	forn(j, 0, m){ cin >> arr[i][j];}
    }
    set<pair<int, int>> steps; int cnt = 0;
    pair<int, int> curr {0, 0};
    while(true){
		char ch = arr[curr.S][curr.F];
		// cout << ch << ' ';
		if (ch == 'E'){
			curr.F++;
			if (curr.F >= n || curr.S <= 0 || curr.F <= 0 || curr.S >= m){
				outt
			}
			else if (steps.count(curr)) lostt
			steps.insert(curr);
			++cnt;
		}
		else if (ch == 'S'){
			curr.S++;
			if (curr.F >= n || curr.S <= 0 || curr.F <= 0 || curr.S >= m){
				outt
			}
			else if (steps.count(curr)) lostt
			steps.insert(curr);
			++cnt;
		}
		else if (ch == 'W'){
			curr.F--;
			if (curr.F >= n || curr.S <= 0 || curr.F <= 0 || curr.S >= m){
				outt
			}
			else if (steps.count(curr)) lostt
			steps.insert(curr);
			++cnt;
		}
		else if (ch == 'N'){
			curr.S--;
			if (curr.F >= n || curr.S <= 0 || curr.F <= 0 || curr.S >= m){
				outt
			}
			else if (steps.count(curr)) lostt
			steps.insert(curr);
			++cnt;
		}
		else if (ch == 'T'){
			cout << cnt; return 0;
		}
    }
    cout << cnt;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
