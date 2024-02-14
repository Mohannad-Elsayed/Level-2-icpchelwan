// Problem: B. The Good Judge
// Contest: Codeforces - Aleppo Collegiate Programming Contest 2023 V.2
// URL: https://codeforces.com/gym/104544/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
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
    int a[n], b[n];
    int gcda = 0, gcdb = 0;
    forn(i, 0, n) cin >> a[i];
    forn(i, 0, n) cin >> b[i];
    
    int res = 2;
    forn(i, 0, n){
    	gcda = __gcd(a[i], gcda);
    	gcdb = __gcd(b[i], gcdb);
    }
    int ggcd = __gcd(gcda, gcdb);
    if (min(gcda, gcdb) == 1 && gcda != gcdb) res = 1;
    else if (gcda == gcdb) res = 0;
	// cout << gcda << ' ' << gcdb << ' ' << ggcd << endl;
	else if (ggcd == 1) res = 2;
	else{
		if (gcda > gcdb) swap(gcda, gcdb);
		if (gcdb%gcda) res = 2;
		else res = 1;
	}
    cout << res; 
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
