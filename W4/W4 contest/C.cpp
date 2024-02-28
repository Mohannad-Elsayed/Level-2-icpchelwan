// Problem: C - Prime Matrix
// Contest: Virtual Judge - Contest #4
// URL: https://vjudge.net/contest/610910#problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-25 20:44:18
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
int sd = 100010;
vector<bool> v(sd, true);
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    v[1] = false;
    for (ll i = 2; i*i<=sd; ++i){
    	if (v[i]){
    		for (ll j = i*i; j < sd; j+=i){
    			v[j] = false;
    		}
    	}
    }
    int n, m, tmp; cin >> n >> m;
    int arr[n][m];
    forn(i, 0, n){
    	forn(j, 0, m){
    		cin >> tmp;
    		int dis = 0;
    		forn(k, tmp, tmp+10000){
    			if (v[k]) break;
    			dis++;
    		}
    		arr[i][j] = dis;
    	}
    }
    
    ll res = INT_MAX;
    forn(i, 0, n){
    	ll sum = 0;
    	forn(j, 0, m){
    		sum += arr[i][j];
    	}
    	res = min(res, sum);
    }
    
    forn(i, 0, m){
    	ll sum = 0;
    	forn(j, 0, n){
    		sum += arr[j][i];
    	}
    	res = min(res, sum);
    }
    
    cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
