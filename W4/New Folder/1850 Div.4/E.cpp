// Problem: E. Cardboard for Pictures
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-24 13:53:45
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
vector<ll> arr;
ll n, k;
ll cal(ll m){
	ll sum = 0;
	forn(i, 0, n){
		sum += ((arr[i] + 2*m) * (arr[i] + 2*m));
		// cout << sum << '\n';
		if (sum > k) return sum;
	}
	return sum;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    cin >> n >> k;
    arr.resize(n); 
    for (auto& e : arr) cin >> e;
    // forn(i, 0, n) cout << arr[i];
    ll l = 1, r = sqrt(k), m;
    while(l<=r){
    	m = (l+r)/2;
    	if (cal(m) > k) r = m-1;
    	else if (cal(m) < k) l = m+1;
    	else break;
    }
    cout << m;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
