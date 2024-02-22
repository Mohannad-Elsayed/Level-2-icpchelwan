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

bool isp(int x){
	forn(i, 2, x/2+1){
		if (!(x%i)) return false;
	}
	return true;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    
	forn(i, 1, 10000){
		forn(j, 1, i){
			if (isp(i*i-j*j))  cout << i << ' ' << j << ' ' << 
			(i*i-j*j) << ' ' << isp(i*i-j*j) << '\n';
		}
	}
	
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
