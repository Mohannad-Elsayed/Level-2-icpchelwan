// Problem: C. Equation
// Contest: Codeforces - Level 3 Qualification Contest
// URL: https://codeforces.com/group/aTBjagg0Ld/contest/507591/problem/C
// When: 2024-03-07 13:18:11

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
    ld n; cin >> n;
    ld l = 1, r = 1e10, m, res;
    int iters = 250;
    while(iters--){
    	m = (l+r)/2;
    	if (m*m + sqrt(m) >= n){
    		res = m;
    		r = m;
    	} else l = m;
    }
    cout << fixed << setprecision(12) << res;
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