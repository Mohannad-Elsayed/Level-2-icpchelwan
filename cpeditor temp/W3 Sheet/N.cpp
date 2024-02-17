// Problem: N - Books
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/N
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-17 00:09:59
// Topic: Two Pointers
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
    ll n, t; cin >> n >> t;
    ll arr[n]; forn(i, 0, n) cin >> arr[i];
    ll sum = 0, l = 0, r = 0, res = 0;
    while(r<n){
    	if (sum < t){
    		sum += arr[r];
    		if (sum <= t){
    			res = max(res, r-l+1);
    		}
    		r++;
    	}
    	else{
			sum -= arr[l];
			l++;
    	}
    }
    cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
