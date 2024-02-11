// Problem: I - Collecting Numbers
// Contest: Virtual Judge - Week #2
// URL: https://vjudge.net/contest/608666#problem/I
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Author: Sakura
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
// #define int long long int
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define ys cout << "YES";
#define ns cout << "NO";
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, cnt = 1, tmp, mn, mx; cin >> n >> mn; mx = mn;
    forn(i, 1, n){
    	cin >> tmp;
    	    		// cout << "tmp " << tmp << " , " << mn << ' ' << mx << endl;
    	    		// cout << "       cnt:  " << cnt << '\n';
    	if (tmp < mn){
    		++cnt;
    		mn = tmp;
    	}
    	else if (tmp - mx > 1){

    		++cnt;
    	}
    	mx = max(tmp, mx);
    }
  	cout << cnt;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
