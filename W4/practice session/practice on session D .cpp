// Problem: D - Divide and Equalize
// Contest: Virtual Judge - Week #4 Session Practice
// URL: https://vjudge.net/contest/610710#problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-18 13:50:03
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
    int arr[n];
    forn(i, 0, n) cin >> arr[i];
    
    map<int, int> mp;
    for (auto k : arr){
	    for (ll i = 2; i*i<=k; ++i){
			while(k%i==0){
				mp[i]++;
				k /= i;
			}
		}
		if (k > 1){
			mp[k]++;
			k/=k;
		}
    }
    int sum = 0;
    for (auto [x, y] : mp) {
    	sum += y;
    	// cout << x <<  ' ' << y << '\n';
    }
    for (auto [x, y] : mp){
    	if (y%n){
    		ns
    		return 0;
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
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
