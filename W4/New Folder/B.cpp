// Problem: B. Broken Keyboard
// Contest: Codeforces - 2022-2023 ICPC, NERC, Southern and Volga Russian Regional Contest (Online Mirror, ICPC Rules, Preferably Teams)
// URL: https://codeforces.com/contest/1765/problem/B
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-24 20:10:08
// Topic: greedy, strings
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
    string s; cin >> s;
    if (n%3 == 2) return (cout << "NO"), 0;
    bool one = true;
    forn(i, 0, n){
    	if (one){
    		one = false;
    		continue;
    	}
    	else{
    		one = true;
    		if (s[i] != s[++i]) return (cout << "NO"), 0;
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
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
