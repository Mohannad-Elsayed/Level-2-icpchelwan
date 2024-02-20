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
int gccd(int a, int b){ // a must be smaller than b
	if (b == 0)
		return max(-a, a);
	else {return gccd(b, a%b);} // here b is larger than a%b
									// so it's the 'a' of the next iteration
}
int lccm(int a, int b){
	return ((a*b)/gccd(a,b));
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, m;
    cin >> n >> m;
    cout << "gcd: " << gccd(n, m) << "\nlcm: " << lccm(n, m);
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
