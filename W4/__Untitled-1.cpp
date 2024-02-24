#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
#define forn(i,a,b) for (ll i=(ll)(a);i<(ll)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pb push_back

bool isp(int x){
	for (ll i = 2; i*i<=x; ++i){
		if (!(x%i)){
			return false;
		}
	}
	return true;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n = 1;
    cout << (printf("0"));
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
