// Problem: C - Number of Pairs
// Contest: Virtual Judge - Contest #3
// URL: https://vjudge.net/contest/610806#problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-18 20:31:08
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
vector<ll> arr;
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, l, r; cin >> n >> l >> r;
    arr.resize(n); forn(i, 0, n) cin >> arr[i];
    sort(all(arr));
    ll sum = 0;
    forn(i, 0, n){
    	int lt = i, rr = n-1, m, resl = -1, resr = -1;
    	while(lt<=rr){
    		m = (lt+rr)/2;
    		if (i != m && arr[m] + arr[i] >= l){
    			resl = m; 
    			rr = m-1;
    		} else lt = m+1;
    	}
    	lt = i; rr = n-1;
    	while(lt<=rr){
    		m = (lt+rr)/2;
    		if (arr[m] + arr[i] <= r){
    			resr = m;
    			lt = m+1;
    		} else rr = m-1;
    	}
    	if (resr == -1 || resl == -1) continue;
    	// cout << resr << endl;
    	sum += (resr-resl+1);
    }
    cout << sum;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
