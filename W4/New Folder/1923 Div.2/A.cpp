// Problem: A. Moving Chips
// Contest: Codeforces - Educational Codeforces Round 162 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1923/problem/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-23 16:45:09
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
    int cnt = 0;
    forn(i, 0, n){
    	cin >> arr[i];
    	if (arr[i] == 1) cnt++;
    }
    int res = 0, cnt2 = 0;
    forn(i, 0, n){
    	if (arr[i] == 1) cnt2++;
    	if (cnt2 >= 1 && cnt2 < cnt && arr[i] == 0) res++;
    }
    cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
