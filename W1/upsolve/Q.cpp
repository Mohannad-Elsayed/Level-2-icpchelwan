// Problem: Q - Airport
// Contest: Virtual Judge - Week #1
// URL: https://vjudge.net/contest/607207#problem/Q
// When: 2024-03-03 09:54:56

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
    int n, m; cin >> n >> m;
    ll mn = 0, mx = 0; 
    vector<int> v1(m); forn(i, 0, m) cin >> v1[i];
    vector<int> v2(v1);
    int k = n;
    while(k--){
    	sort(all(v1), greater<int>());
    	// each(x, v1) cout << x << ' '; cout << endl;
    	mx += v1[0];
    	v1[0]--;
    }
    k = n;
    while(k--){
    	sort(all(v2));
    	// each(x, v2) cout << x << ' '; cout << endl;
    	mn += v2[0];
    	v2[0]--;
    	if (v2[0] == 0) v2[0] = 100000;
    }
    
    cout << mx << ' ' << mn;
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