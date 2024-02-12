// Problem: I - Collecting Numbers
// Contest: Virtual Judge - Week #2
// URL: https://vjudge.net/contest/608666#problem/I
// Memory Limit: 512 MB
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
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, tmp, cnt = 0; cin >> n;
    multiset<int> ste;
    while(n--){
    	cin >> tmp;
    	auto it = ste.upper_bound(tmp);
    	if (it == ste.end()){ ste.insert(tmp); ++cnt;}
    	else{
    		ste.erase(it);
    		ste.insert(tmp);
    	}
    	
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
