// Problem: F - Omkar and Last Class of Math
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/F
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-20 18:59:05
// Topic: LCM, GCD
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
int gcd(int a, int b){
	if (!b) return a;
	return gcd(b, a%b);
}
int lcm(int a, int b){
	return ((a*b) / (gcd(a, b)));
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n; cin >> n;
    if (!(n%2)) return (cout << n/2 << ' ' << n/2), 0;
    int mn = INT_MAX;
    forn(i, 1, (n/2+1)){
    	cout << endl << i << ' ' << n-i << endl;
    	cout << "gcd: " << gcd(i, n-1) << " lcm: " << lcm(i, n-i) << endl;
    	((mn > lcm(i, n-i)) && (mn = lcm(i, n-i)));
    }
    cout << endl << mn;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
