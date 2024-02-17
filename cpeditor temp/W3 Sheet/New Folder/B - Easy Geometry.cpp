// Problem: B. Easy Geometry
// Contest: Codeforces - USI-Team-Selection 2023-2024
// URL: https://codeforces.com/gym/104886/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-17 14:27:56
// Topic: Math, ternary search
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

ld dis(ld x1, ld y1, ld x2, ld y2, ld m){
	return sqrtl((fabs(x1-m)) * (fabs(x1-m)) + y1 * y1) + sqrt((fabs(x2-m)) * (fabs(x2-m)) + y2 * y2);
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ld x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
    int iters = 800;
    ld l = -1e9, r = 1e9, m, ans;
    while(iters--){
    	m = (l+r)/2;
    	// cout << fixed << setprecision(2) << m << ' ' << dis(x1, y1, x2, y2, m) << '\n';
    	if (dis(x1, y1, x2, y2, m) < dis(x1, y1, x2, y2, m+1e-6)){
    		ans = dis(x1, y1, x2, y2, m);
    		r = m;
    	} else l = m;
    }
    cout << fixed << setprecision (10) << ans;
    // // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
