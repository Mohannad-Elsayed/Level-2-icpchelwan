// Problem: E. Ouda & Gom3a
// Contest: Codeforces - Level 3 Qualification Contest
// URL: https://codeforces.com/group/aTBjagg0Ld/contest/507591/problem/E
// When: 2024-03-07 13:36:42

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
ll power(ll b, ll ex){
	if (ex == 0) return 1;
	ll p = b;
	// cout << p << ' ' << ex << endl;
	while(--ex){
		p*=b;
		p %= 1000000007;
	}
	return p;
}
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll n, q; cin >> n >> q;
    ll arr[n], par[n+3]{};
    forn(i, 0, n) cin >> arr[i];
    forn(i, 0, q){
    	ll x, y; cin >> x >> y;
    	x--; y--;
    	par[x] -= 1; par[y+1] += 1;
    }
    ll sum = 0;
    forn(i, 0, n+1){
    	sum += par[i];
    	par[i] = sum;
    }
    forn(i, 0, n) arr[i] += par[i];
    // each(x, par) cout << x << ' ' ;
    sum = 0;
    forn(i, 0, n){
    	if (arr[i]>0) sum++;
    }
    // each(x, arr) cout << x << ' ' ; cout << '\n';
    // if (sum == 0) return (cout << 1), 0;
    cout << power(26LL, sum);
    // cout << sum;
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