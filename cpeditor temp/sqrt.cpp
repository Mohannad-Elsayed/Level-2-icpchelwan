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
    int n; cin >> n;
    double start = 0, end = n, md = 9, w = 1e-8; 
    while(start - end >= 1e-11){
    	md = (end+start)/2.0;
    	if (fabs(md*md - n) <= w){
    		cout << fixed << setprecision(20) << md; 
    		break;
    	}
    	if ((md*md) < n){
    		start = md;
    	}
    	else if ((md*md) > n){
    		end = md;
    	}
    }
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
