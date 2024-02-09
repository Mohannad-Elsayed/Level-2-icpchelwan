// Problem: J - Missing Coin Sum
// Contest: Virtual Judge - Week #2
// URL: https://vjudge.net/contest/608666#problem/J
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
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
    int n, tmp; cin >> n; int mn = INT_MAX;
    multiset<int> ste;
    forn(i, 0, n){
    	cin >> tmp; 
    	mn = min(tmp, mn);
    	ste.insert(tmp);
    }
    ll pfx = *ste.begin(), res;
    if (mn != 1){
    	cout << 1;
    	return 0;
    }
    auto it = ste.begin(); ++it;
    for(; it != ste.end(); ++it){
    	int x = *it;
    	if (x > pfx+1){
    		cout << pfx+1;
    		return 0;
    	}
    	pfx += x;
    }
  	cout << pfx+1;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
