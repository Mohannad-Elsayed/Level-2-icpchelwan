// Problem: T - Greg and Array
// Contest: Virtual Judge - Week #1
// URL: https://vjudge.net/contest/607207#problem/T
// When: 2024-03-03 15:40:31

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
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
int test = 1;
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll n, m, k; cin >> n >> m >> k;
    ll arr[n]; forn(i, 0, n) cin >> arr[i];
    ll qq[m][3];
    forn(i, 0, m){
    	cin >> qq[i][0] >> qq[i][1] >> qq[i][2];
    }
    ll par1[m+2]{};
    forn(i, 0, k){
    	ll l, r; cin >> l >> r;
    	par1[l]++; par1[r+1]--;
    }
    ll par1pfx[m+2]{}; par1pfx[1] = par1[0];
    forn(i, 2, k+2) par1pfx[i] = par1pfx[i-1] + par1[i-1];
    // each(x, par1pfx) cout << x << ' ' ;
    ll par2[n+2]{};
    forn(i, 2, m+2){
    	par2[qq[i-2][0]] += par1pfx[i]*qq[i-2][2];
    	par2[qq[i-2][1]+1] -= (par1pfx[i]*qq[i-2][2]);
    }
    ll par2pfx[n+2]{}; par2pfx[1] = par2[0];
    forn(i, 2, n+2) par2pfx[i] = par2pfx[i-1] + par2[i-1];
    // each(x, par2pfx) cout << x << ' ';
    forn(i, 0, n) cout << arr[i] + par2pfx[i+2] << ' ';
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // cin >> test;
    while(test--){
      solve();
      cout << '\n';
    }
}