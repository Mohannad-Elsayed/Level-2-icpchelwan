// Problem: D - Binary Deque
// Contest: Virtual Judge - Contest #3
// URL: https://vjudge.net/contest/610806#problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-18 22:03:42
// Topic: 
// 
// Powered by CP Editor (https://cpeditor.org)

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
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, s, sum = 0; cin >> n >> s;
    int arr[n];
    forn(i, 0, n){
    	cin >> arr[i];
    	sum += arr[i];
    }
    if (sum < s) return (cout << -1), 0;
    if (sum == s) return (cout << 0), 0;
    int upperleft = (n+1)/2, cost = 1;
    // cout << upperleft;
    bool flag = true, flag2 = true;
    vector<pair<int, int>> v; // cost <-> index
    forn(i, 0, n){
    	if (arr[i] == 1){
    		v.pb({cost, i+1});
    	}
    	if (cost < upperleft && flag) cost++;
    	else {
    		cost--; flag = false;
    		if (!(n%2) && flag2){
    			cost++;
    			flag2 = false;
    		}
    	
    	}
    	// cout << cost << ' ';
    }
    sort(all(v));
    // for(auto [x, y] : v) cout << x << ' ' << y << endl;
    int suml = 0, sumr = 0;
    forn(i, 0, sum - s){
    	if ((v[i].S >= upperleft && n%2) || (v[i].S >= upperleft && !(n%2)))  sumr = v[i].F;
    	else suml = v[i].F;
    }
    cout << suml+sumr;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
