// Problem: R - Sage's Birthday (hard version)
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/R
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-15 17:39:47
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
    int arr[n]; forn(i, 0, n) cin >> arr[i];
    sort(arr, arr+n);
    if (n < 3){
    	cout << 0 << '\n';
    	forn(i, 0, n) cout << arr[i] << ' ';
    	return 0;
    }
    int l = 0, r = ((n+1)/2)-1, m, res = -1;
    while(l<=r){
    	m = (l+r)/2;
    	if (arr[m] < arr[m+1]){
    		res = m;
    		l = m+1;
    	} else r = m-1;
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
