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
ll gccd(ll a, ll b){ // a must be smaller than b
	if (b == 0)
		return max(-a, a);
	else {return gccd(b, a%b);} // here b is larger than a%b
									// so it's the 'a' of the next iteration
}
ll lccm(ll a, ll b){
	return ((a*b)/gccd(a,b));
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
	// int n; cin >> n;
	forn(n, 2, 30)	{forn(i, 1, n/2+1){
			int x = gccd(i, n-i) + lccm(i, n-i);
			if (x == n){
				cout << "#" << n << endl;
				cout << i << ' ' << n-i << ' ' << 
					gccd(i, n-i) << ' ' <<  lccm(i, n-i) << "\n\n";
					break;
			}
		}}
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
