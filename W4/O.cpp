// Problem: O - Hossam and Trainees
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/O
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// By: Sakura Yamauchi
// When: 2024-02-23 12:04:17
// Topic: Divisibility
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

    int n; cin >> n; set<int> d; int arr[n];
    bool flag = true;
    forn(i, 0, n){ 
    	cin >> arr[i];
    	if(arr[i] == 1)continue;
    	// cout << arr[i] << endl;
    	if (d.count(arr[i])) {flag = false;}
    	d.insert(arr[i]);
    	for (ll j = 2; j*j <= arr[i]; ++j){
    		if (!(arr[i]%j)){
    			if (d.count(j)) {flag = false;}
    			d.insert(j);
	    		if (j != arr[i]/j){
	    			if (d.count(arr[i]/j)) {flag = false;}
	    			d.insert(arr[i]/j);
	    		}
    		}
    	}
    }
    if (flag) ns
    else ys
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
