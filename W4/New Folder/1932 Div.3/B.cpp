// Problem: B. Chaya Calendar
// Contest: Codeforces - Codeforces Round 927 (Div. 3)
// URL: https://codeforces.com/contest/1932/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-18 14:42:20
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
    forn(i, 0, n){
    	cin >> arr[i];
    }
    int year = 0;
    forn(i, 0, n){
    	if (arr[i] > year) year = arr[i];
    	else{
    		year = ((year+arr[i])/arr[i])*arr[i];
    	}
    	
    }
    cout << year;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
