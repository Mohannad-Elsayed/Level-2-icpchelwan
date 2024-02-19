// Problem: D. Vlad and Division
// Contest: Codeforces - Codeforces Round 928 (Div. 4)
// URL: https://codeforces.com/contest/1926/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-19 17:02:45
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
    int n, tmp; cin >> n;
    int x = 0;
    int arr[n];
    set<int> ste;
    forn(i, 0, n){
    	cin >> arr[i];
    }
    sort(arr, arr+n);
    // forn(i, 1, n){
    	// // // cout << (x^arr[i]) << '\n';
    	// // x ^= arr[i];
    	// // // cout << x << '\n';
//     	
    	// cout << (arr[i] ^ arr[i-1]) << endl;
    // }
//     
    // // cout << '\n' << ste.size() << '\n';
    // // for (auto x : ste) cout << x << ' ';
    
    cout << ((2147483647/2)^0);
    cout << endl << ((2147483647/2)^2);
    
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
