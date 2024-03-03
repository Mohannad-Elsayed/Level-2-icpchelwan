// Problem: S - Kuriyama Mirai's Stones
// Contest: Virtual Judge - Week #1
// URL: https://vjudge.net/contest/607207#problem/S
// When: 2024-03-03 15:09:43

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
    int n; cin >> n;
    ll arr[n], arrs[n];
    forn(i, 0, n){ cin >> arr[i]; arrs[i] = arr[i];}
    sort(arrs, arrs+n);
    ll pfx[n+1]{}, pfxs[n+1]{};
    
    pfx[1] = arr[0]; pfxs[1] = arrs[0];
    forn(i, 2, n+1){
    	pfx[i] = pfx[i-1] + arr[i-1];
    	pfxs[i] = pfxs[i-1] + arrs[i-1];
    }
    // each(x , pfx) cout << x << ' ';
    int q; cin >> q;
    while(q--){
    	int t, l, r; cin >> t >> l >> r;
    	t == 1 ? cout << pfx[r] - pfx[l-1] : cout << pfxs[r] - pfxs[l-1];
    	cout << '\n';
    }
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