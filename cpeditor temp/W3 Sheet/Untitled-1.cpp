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
vector<int> v(100000, true);
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    
    int cnt = 1;
    int n, mul = 1; cin >> n; 
    for(;mul<=n;mul++){
	    for(int i = 1; i<=n; i+=2){
	    	if (mul*i > n) break;
	    	if (v[mul*i]){cout << mul * i << " (" << cnt++<<')' << "  "; }
	    	v[mul*i] = false;
	    }
	    cout << '\n';
    	
    }
    
    // int n, tmp; cin >> n;
    // int x = 0;
    // int arr[n];
    // set<int> ste;
    // forn(i, 0, n){
    	// cin >> arr[i];
    // }
    // sort(arr, arr+n);
    // forn(i, 0, n){
    	// // cout << (x^arr[i]) << '\n';
    	// x ^= arr[i];
    	// ste.insert(x);
    // }
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}