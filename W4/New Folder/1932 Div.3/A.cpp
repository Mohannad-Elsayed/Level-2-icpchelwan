// Problem: A. Thorns and Coins
// Contest: Codeforces - Codeforces Round 927 (Div. 3)
// URL: https://codeforces.com/contest/1932/problem/0
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-18 14:06:47
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
    string s; cin >> s;
    int cnt = 0;
    forn(i, 0, n){
    	if (s[i] == '@'){
    		cnt++;
    	}
    	if (s[i] == '*' && i<n-1 && s[i+1] == '*'){
    		break;
    	}
    }
    cout << cnt;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
