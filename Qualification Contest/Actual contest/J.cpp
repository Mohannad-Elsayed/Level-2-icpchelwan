// Problem: J. The Standings
// Contest: Codeforces - Level 3 Qualification Contest
// URL: https://codeforces.com/group/aTBjagg0Ld/contest/507591/problem/J
// When: 2024-03-07 13:23:42

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
bool comp(pair<string, pair<int, int>> p1, pair<string, pair<int, int>> p2){
	if (p1.S.F > p2.S.F) return true;
	else if (p1.S.F == p2.S.F && p1.S.S < p2.S.S) return true;
	else if (p1.S.F == p2.S.F && p1.S.S == p2.S.S & p1.F < p2.F) return true;
	return false;
}
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n; cin >> n;
    vector<pair<string, pair<int, int> > > ste;
    forn(i, 0, n){
    	string s; int x, y;
    	cin >> s >> x >> y;
    	ste.pb(make_pair(s, make_pair(x, y)));
    }
    sort(all(ste), comp);
    each(x, ste){
    	cout << x.F << ' ' << x.S.F << ' ' << x.S.S;
    	cout << '\n';
    }
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    // cin >> test;
    // cout << "# " << test << '\n';
    while(test--){
      solve();
      cout << '\n';
    }
}