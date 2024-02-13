// Problem: P - Hamburgers
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/P
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    string s; cin >> s;
    ll B = 0, S = 0, C = 0;
    for (char ch : s){
    	if (ch == 'B') B++;
    	if (ch == 'S') S++;
    	if (ch == 'C') C++;
    }
    ll aB, aS, aC;
    cin >> aB >> aS >> aC;
    ll nB = -B + aB, nS = -S + aS, nC = -C + aC;
    cout << nB << ' ' << nS << ' ' << nC;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
