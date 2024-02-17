// Problem: B. Permutation Printing
// Contest: Codeforces - think-cell Round 1
// URL: https://codeforces.com/contest/1930/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-17 17:23:44
// Topic: adhoc
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
    int l = 1, r = n;
    int i = 0;
    // int arr[n];
    while(l<=r){
    	if (i%2) {cout << l++;}
    	else {cout << r--;}
    	cout << ' '; ++i;
    }
    // forn(i, 0, n-1){
    	// forn(j, 0, n-1){
    		// if (arr[i] % arr[j] == 0){
    			// if (arr[i+1] % arr[j]+1 == 0){
    				// cout << "*******\n" << i << ' ' << j << endl << arr[i] << ' ' << arr[j] << "\nfound!";
    			// }
    		// }
    	// }
    // }
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
