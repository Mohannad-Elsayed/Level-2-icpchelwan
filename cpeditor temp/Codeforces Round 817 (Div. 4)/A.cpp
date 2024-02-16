// Problem: A. Spell Check
// Contest: Codeforces - Codeforces Round 817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-16 14:42:36
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
    map<char, int> mp {{'T' , 0}, {'i' , 0}, {'m', 0}, {'u', 0}, {'r', 0}};
    int n; cin >> n; string s; cin >> s;
    for (char ch : s) {
    	if (mp.find(ch) == mp.end()) return (cout << "NO"), 0;
    	else mp[ch]++;
    }
    for (auto [x, y] : mp){
    	if (y != 1) return (cout << "NO"), 0;
    }
    cout << "YES";
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
