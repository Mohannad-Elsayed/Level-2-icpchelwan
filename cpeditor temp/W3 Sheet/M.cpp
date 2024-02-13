// Problem: M - Vanya and Lanterns
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/M
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
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, k, tmp; cin >> n >> k;
    set<ld> ste; vector<int> v;
    forn(i, 0, n) cin >> tmp, v.push_back(tmp);
    sort(all(v));
    // for(auto x : v) cout << x << ' ';
    forn(i, 1, n){
    	ld diff = (v[i] - v[i-1])/2.0;
    	// cout << diff << ' ' << v[i] << ' ' << v[i-1] << endl;
    	ste.insert(diff);
    }
    ste.insert(*v.begin() - 0); ste.insert(k - *v.rbegin());
    cout << setprecision(10) << fixed << *ste.rbegin();
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
