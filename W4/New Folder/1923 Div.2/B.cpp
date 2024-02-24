// Problem: B. Monsters Attack!
// Contest: Codeforces - Educational Codeforces Round 162 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1923/problem/B
// Memory Limit: 256 MB
// Time Limit: 2500 ms
// By: Sakura Yamauchi
// When: 2024-02-23 16:50:36
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
    // int SIZE = 3*1e5+10;
    ll n, k, sum = 0; cin >> n >> k;
    ll arr[n]; map<int, ll> mp;
    forn(i, 0, n){
    	cin >> arr[i];
    }
    forn(i, 0, n){
    	ll tmp; cin >> tmp;
    	mp[abs(tmp)] += arr[i];
    }
    for (auto it = mp.begin(); it != mp.end(); it++){
    	sum += it -> second;
    	it -> second = sum;
    }
    // for (auto [x, y]:mp) cout << x << ' ' << y << endl;
    for (auto [x, y]:mp){
    	if (k*x < y){
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
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
