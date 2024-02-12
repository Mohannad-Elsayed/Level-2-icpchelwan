// Problem: B. Aggressive cows
// Contest: Codeforces - Standard #4 (Binary search , two pointers )
// URL: https://codeforces.com/group/c3FDl9EUi9/contest/264941/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
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
#define F first
#define S second
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, mxdis, tmp, st, ed; cin >> n >> mxdis;
    vector<int> v;
    forn(i, 0,n){
    	cin >> tmp; 
    	v.push_back(tmp); }
    sort(all(v));
    st = 1; ed = *v.rbegin() - *v.begin();
    int res =-1, md; 
    while(st <= ed){
    	md = (ed+st)/2;
    	int tmxdis = mxdis-1;
    	bool flag = false;
    	int start = 0, end;
    	forn(i, 1, n){
    		    end = i;
    		    if (v[end] - v[start] >= md){
    			tmxdis--;
    			start = end;
    	// cout << st << ' ' << ed << ' ' << tmxdis << endl;
    			if (tmxdis == 0){ flag = true; break; }
    		}
    	}
    	if (flag) { res = md; st = md+1; }
    	else ed = md-1;
    }
    cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
