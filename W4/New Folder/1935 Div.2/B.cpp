// Problem: B. Informatics in MAC
// Contest: Codeforces - Codeforces Round 932 (Div. 2)
// URL: https://codeforces.com/contest/1935/problem/B
// When: 2024-03-05 17:51:29

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
    int n; cin >> n; int arr[n]; map<int, int> mp;forn(i, 0, n) {cin >> arr[i]; mp[arr[i]]++;}
    each(e, mp) cout << e.F << ' ' << e.S << endl; //cout << endl;
    
    
    // if (mp.size() == 1){
		// cout << n << '\n';
    	// forn(i, 0, n){
    		// cout << i+1 << ' ' << i+1 << '\n';
    	// }
    // }
    // if (mp.count(0) && mp.size() == n) return (cout << -1), 0;
    
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