// Problem: D. Line
// Contest: Codeforces - Codeforces Round 817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-16 14:57:34
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
    int n;cin >> n;
    ll sum = 0;
    string s; cin >> s;
    vector<pair<ll, ll>> v(n);
    vector<int> diff(n);
    forn(i, 0, n){
    	if (s[i] == 'L'){
    		// v[i] = {n-i-1, i};
    		sum += i;
    		diff[i] = (n-i-1- i);
    	}
    	else{
    		// v[i] = {i, n-i+1};
    		sum += n-i-1;
    		diff[i] = i- (n-i-1);
    	}
    }
    sort(all(diff), greater<>());
    // for(auto x : diff) cout << x <<endl;
    forn(i, 0, n){
    	if (diff[i] > 0) sum += diff[i];
    	cout << sum << ' ' ;
    }
    // cout << sum <<endl;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
