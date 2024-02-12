// Problem: A. Packing Rectangles
// Contest: Codeforces - ITMO Academy: pilot course - Binary Search - Step 2
// URL: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
// #define int long long int
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
ll w, h, n;
bool ok(ll m){
	return (m/w) * (m/h) >= n; 
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    cin >> w >> h >> n;
    ll l = 1, r = 1, res;
    while(!ok(r)){
    	r *= 2;
    }
    while(l<=r){
    	ll mid = (l+r)/2;
    	if (ok(mid)){
    		res = mid;
    		r = mid-1;
    	}
    	else{
    		l = mid+1;
    	}
    }
    cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
