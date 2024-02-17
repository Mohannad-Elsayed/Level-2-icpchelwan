// Problem: A. Maximise The Score
// Contest: Codeforces - think-cell Round 1
// URL: https://codeforces.com/contest/1930/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-17 17:10:34
// Topic: 800, implementation
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
    int n; cin >> n; n*=2;
    ll sum = 0;
    int arr[n];
    forn(i, 0, n) cin >> arr[i];
    sort(arr, arr+n, greater<>());
    // forn(i, 0, n) cout << arr[i] << ' ';
    for(int i = 0; i<n; i+=2){
    	sum += min(arr[i], arr[i+1]);
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
