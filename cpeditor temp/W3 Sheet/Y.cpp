// Problem: Y - The Smallest String Concatenation
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/Y
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// By: Sakura Yamauchi
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
auto comp(string s1, string s2){
	return s1+s2 < s2+s1;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, mxlen = INT_MIN; cin >> n;
    vector<string> v(n);
    for(auto &e : v) cin >> e;
    sort(all(v), comp);
    for(auto s : v) cout << s;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
