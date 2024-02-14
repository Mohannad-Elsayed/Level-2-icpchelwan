// Problem: U - Ternary String
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/U
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    string s; cin >> s;
    int n = s.length();
    int l {0}, r {0}, res {INT_MAX};
    // cout << l << r << res;
    int arr[4]{};
    int curr_dis = 0;
    while(l<n){
    	while(r < n && curr_dis < 3){
    		arr[s[r]-'0']++;
    		if (arr[s[r]-'0'] == 1) curr_dis++;
    		r++;
    	}
    	if (curr_dis == 3)
    		res = min(res, r-l);
    	arr[s[l]-'0']--;
    	if (arr[s[l]-'0'] == 0) curr_dis--;
    	l++;
    }
    (res > 1e7) ? cout << 0 : cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
