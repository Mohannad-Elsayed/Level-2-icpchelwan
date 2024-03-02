// Problem: A. Too Min Too Max
// Contest: Codeforces - Codeforces Round 931 (Div. 2)
// URL: https://codeforces.com/contest/1934/problem/0
// When: 2024-03-01 16:36:13

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
    ll n; cin >> n;
    ll arr[n]; forn(i, 0, n) cin >> arr[i];
    
    sort(arr, arr+n);
    n--;
    ll res = abs(arr[n] - arr[0]) + abs(arr[0] - arr[n-1]) + abs(arr[n-1] - arr[1]) + abs(arr[1] - arr[n]);
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