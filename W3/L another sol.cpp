// Problem: L - ACM T-Shirt
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/L
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
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, q, tmp, res; cin >> n >> q;
    int arr[n]; forn(i, 0, n) cin >> arr[i];
    sort(arr, arr+n);
    while(q--){
    	cin >> tmp;
    	int l = 0, r = n-1, m, res = 0;
    	while(l<=r){
    		m = l+r; m/=2;
    		if (arr[m] <= tmp){
    			res = m; // res is never updated
    			l = m+1;
    		} else r = m-1;
    	}
    	if (res != n-1 && abs(arr[res+1] - tmp) < abs(arr[res] - tmp)) ++res;
    	cout << arr[res] << '\n';
    }
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
