// Problem: L. Mutual Friends
// Contest: Codeforces - Level 3 Qualification Contest
// URL: https://codeforces.com/group/aTBjagg0Ld/contest/507591/problem/L
// When: 2024-03-07 14:57:19

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll n, a, b, q, t, tt; cin >> n >> a >> b >> q;
    set<ll> ste1, ste2;
    while(q--){
    	cin >> t >> tt;
    	if ((t == a && tt == b) || (t == b && tt == a)) continue;
    	if (t == a)  ste1.insert(tt);
    	if (tt == a) ste1.insert(t);
    	if (t == b)  ste2.insert(tt);
    	if (tt == b) ste2.insert(t);
    }
    ll cnt = 0;
    // each(x, ste1){ cout << x << ' ' ; cout << endl;}
    // each(x, ste2) cout << x << ' ' ;
    each(x, ste1){
    	if (ste2.count(x)) cnt++;
    }
    cout << cnt;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    // cin >> test;
    forn(i, 1, test+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
}