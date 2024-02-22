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
ll power(int x, int y){
	ll p = x;
	while(--y) p *= x;
	return p;
}
ll gccd(ll a, ll b){ // a must be smaller than b
	if (b == 0)
		return max(-a, a);
	else {return gccd(b, a%b);} // here b is larger than a%b
									// so it's the 'a' of the next iteration
}
ll lccm(ll a, ll b){
	return (((ll)a*b)/gccd(a,b));
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, m;
    cin >> n >> m;
    // cout << "n = " << n << "   m = " << m << endl;
    int tn = n, tm = m;
    if (!m && !n) return (cout << "invalid!"), 0;
    if (!n) return (cout << m), 0;
    if (!m) return (cout << n), 0;
    
    // cout << "gcd: " << gccd(n, m) << "\nlcm: " << lccm(n, m);
// second solution
	// gcd (min power of common divisors)
	map<int, int> pr1, pr2;
	while(!(n%2)){
		pr1[2]++;
		n/=2;
	}
	
	while(!(m%2)){
		pr2[2]++;
		m/=2;
	}
	
	for (ll i = 3; i * i <= n; i+=2){
		while(!(n%i)){
			pr1[i]++;
			n/=i;
		}
	}
	if (n!=1) pr1[n]++;
	
	for (ll i = 3; i * i <= m; i+=2){
		while(!(m%i)){
			pr2[i]++;
			m/=i;
		}
	}
	if (m!=1) pr2[m]++;
	
	// for (auto [x, y] : pr1) cout << x  << ' ' << y << endl;
	// cout << endl;
	// for (auto [x, y] : pr2) cout << x  << ' ' << y << endl;
	
	ll _gcd_ = 1, _lcm_ = 1;
	for(auto [x, y] : pr1){
		if (pr2.count(x)){
			// cout << x << ' ' << y << ' ' << pr2[x] << endl;
			_gcd_ *= (power(x, min(y, pr2[x])));
			_lcm_ *= (power(x, max(y, pr2[x])));
			pr2.erase(x);
		}
		else _lcm_ *= (power(x, y));
	}
	for (auto [x, y] : pr2) _lcm_ *= (power(x, y));
	cout << "Prime Factorization Method: \n";
	cout << "GCD: " << _gcd_ << "  LCM: " << _lcm_ << endl;
	cout << "\nEuclidean Method: \n";
	cout << "GCD: " << gccd(tn, tm) << "  LCM: " << lccm(tn, tm) << endl;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
