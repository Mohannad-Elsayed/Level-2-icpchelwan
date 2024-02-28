// Problem: F. Cup Tower (Easy Version)
// Contest: Codeforces - Random
// URL: https://codeforces.com/group/HuzlX2mt56/contest/468484/problem/F
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-25 23:15:39
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
    int n, q, tmp; cin >> n >> q;
    set<int> ste; 
    forn(i, 0, n){
    	cin >> tmp;
    	ste.insert(tmp);
    }
    while(q--){
    	cin >> tmp;
    	auto it = ste.upper_bound(tmp);
    	auto itt = ste.begin();
    	cout << (it - itt) << '\n';
    }
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
