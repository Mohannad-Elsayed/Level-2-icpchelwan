// Problem: M. Problem
// Contest: Codeforces - Level 3 Qualification Contest
// URL: https://codeforces.com/group/aTBjagg0Ld/contest/507591/problem/M
// When: 2024-03-07 15:45:12

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
    int n; cin >> n;
    vector<string> v(n);
    forn(i, 0, n) cin >> v[i];
    sort(all(v));
    each(s, v) cout << s << ' ';
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    cin >> test;
    forn(i, 1, test+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
}