// Problem: G - Just Eat It!
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/G
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-22 10:38:54
// Topic: Kadane's Algorithm
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
    ll n, tmp, sum = 0; cin >> n;
    vector<ll> pfx(n+1);
    forn(i, 0, n){
    	cin >> tmp;
    	sum += tmp;
    	pfx[i] = sum;
    }
    pfx.insert(pfx.begin(), 0);
    // forn(i, 0, n+1) cout << pfx[i] << ' '; cout << "\n\n";
	int l = 0, r = 1;
	ll mx1 = pfx[n], mx2 = INT_MIN, mn = pfx.front(), mxtmp;
	while(r<=n){
		mxtmp = pfx[r] - pfx[l];
		// cout << l << ' ' << r << ' ' << n << ' ' << mxtmp << ' ' << mx1 << endl;
		if ((!(l == 0 && r == n)) && mxtmp >= mx1){
			return (cout << "NO"), 0;
		}
		if (mn > pfx[r]) l = r;
		r++;
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
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
