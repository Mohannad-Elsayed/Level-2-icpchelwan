// Problem: C. Lexicographically Largest
// Contest: Codeforces - think-cell Round 1
// URL: https://codeforces.com/contest/1930/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-17 17:55:17
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
bool comp(pair<int, int> p1, pair<int, int> p2){
	if (p1.F == p2.F) return p1.S > p2.S;
	else return p1.F > p2.F;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, tmp; cin >> n;
    map<ll, set<ll, greater<>>, greater<>> mp;
    forn(i, 1, n+1){
    	cin >> tmp;
    	mp[tmp].insert(i);
    }
    for (auto [x, y] : mp){
    	cout << x << endl;
    	for (auto it = y.begin(); it != y.end(); ++it){
    		cout << *it << ' ' ;
    	}
    	cout << "\n\n";
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
