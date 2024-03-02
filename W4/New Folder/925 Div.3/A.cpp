// Problem: A. Recycling Bottles
// Contest: Codeforces - Codeforces Round 352 (Div. 1)
// URL: https://codeforces.com/problemset/problem/671/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
ld get(ll x1, ll y1, ll x2, ll y2){
	return sqrtl((x1-x2)*(x1-x2) + (y2-y1) * (y2-y1));
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll ax, ay, bx, by, tx, ty, n;
    cin >> ax >> ay >> bx >> by >> tx >> ty >> n;
    vector<ld> dis_a(n), dis_b(n), dis_t(n);
    ll x, y; ld all = 0, final = 2e18; 
    forn(i, 0, n){
    	cin >> x >> y;
    	dis_t[i] = get(x, y, tx, ty);
    	dis_a[i] = get(x, y, ax, ay) - dis_t[i];
    	dis_b[i] = get(x, y, bx, by) - dis_t[i];
    	all += dis_t[i] * 2;
    }
    multiset<ld> ms;
    forn(i, 0, n){
    	ms.insert(dis_b[i]);
    	final = min(final, all + dis_a[i]);
    	final = min(final, all + dis_b[i]);
    }
    forn(i, 0, n){
    	ld curr = dis_a[i];
    	ms.erase(ms.find(dis_b[i]));
    	if (ms.size()) curr += *ms.begin();
    	ms.insert(dis_b[i]);
    	final = min(final, all + curr);
    }
    cout << fixed << setprecision(15) << final;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
