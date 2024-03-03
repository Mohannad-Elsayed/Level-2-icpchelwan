// Problem: R - Restoring Password
// Contest: Virtual Judge - Week #1
// URL: https://vjudge.net/contest/607207#problem/R
// When: 2024-03-03 10:31:06

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int test = 1;
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    string msg; cin >> msg;
    unordered_map<string, int> mp;
    forn(i, 0, 10){
    	string s; cin >> s;
    	mp[s] = i;
    }
    for (int i = 0; i<80; i+=10){
    	string s = msg.substr(i, 10);
    	cout << mp[s];
    }
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // cin >> test;
    while(test--){
      solve();
      cout << '\n';
    }
}