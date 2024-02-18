// Problem: C. LR-remainders
// Contest: Codeforces - Codeforces Round 927 (Div. 3)
// URL: https://codeforces.com/contest/1932/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-18 14:23:32
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
    ll n, m; cin >> n >> m;
    // cout << n << m;
    ll arr[n];
    ll p = 1;
    forn(i, 0, n){
    	cin >> arr[i];
    	p *= arr[i];
    }
    // cout << p%m << ' ';
    string s; cin >> s;
    // cout << s;
    int l = 0, r = n-1;
    forn(i, 0, n){
    	char ch = s[i];
    	cout << p%m << ' ';
    	if (ch == 'L'){
    		p /= arr[l];
    		l++;
    	}
    	else if (ch == 'R'){
    		p /= arr[r];
    		r--;
    	}
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
