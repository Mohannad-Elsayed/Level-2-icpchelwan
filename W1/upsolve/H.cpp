// Problem: H - Cancel the Trains
// Contest: Virtual Judge - Week #1
// URL: https://vjudge.net/contest/607207#problem/H
// When: 2024-02-28 06:35:45

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
int test = 1;
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, m, tmp; cin >> n >> m;
    map<int, int> mp;
    forn(i, 0, n){
    	cin >> tmp;
    	mp[tmp]++;
    }
    forn(i, 0, m){
    	cin >> tmp;
    	mp[tmp]++;
    }
    int res = 0;
    for (auto [x, y] : mp) if (y>1) res++;
    cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin >> test;
    while(test--){
      solve();
      cout << '\n';
    }
}