// Problem: K. Gaza is under siege, world.
// Contest: Codeforces - Level 3 Qualification Contest
// URL: https://codeforces.com/group/aTBjagg0Ld/contest/507591/problem/K
// When: 2024-03-07 16:39:13

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
    ll sum = 0, n; cin >> n;
    ll arr[n]; 
    forn(i, 0, n){
    	cin >> arr[i];
    	sum += arr[i];
    }
    cout << sum%n;
    
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