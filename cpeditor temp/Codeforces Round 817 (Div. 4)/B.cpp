// Problem: B. Colourblindness
// Contest: Codeforces - Codeforces Round 817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-16 15:15:48
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
    int n; cin>>n;
    string s, ss; cin >> s >> ss;
    forn(i, 0, n){
    	if (s[i] != ss[i] && (!(s[i] == 'B' && ss[i] == 'G') ||  !(s[i] == 'G' && ss[i] == 'B'))){
    		return (cout << "NO"), 0;
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
