// Problem: B. Closest to the Left
// Contest: Codeforces - ITMO Academy: pilot course - Binary Search - Step 1
// URL: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-16 21:10:53
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
    int n, q; cin >> n >> q;
    int arr[n]; forn(i, 0, n) cin >> arr[i];
    while(q--){
    	int tmp; cin >> tmp;
    	int l = -1, r = n, m; 
    	while(r > l+1){
    		m = (l+r)/2;
    		if (arr[m] <= tmp) l = m;
    		else r = m;
    	}
    	cout << l+1 << '\n';
    }
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
