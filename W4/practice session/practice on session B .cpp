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
    int n = 1e6;
    vector<bool> primes(n+1, true);
    for(int i = 2; i*i<=n; ++i){
    	if (primes[i] == true){
    		for(int j = i*i; j<= n; j+=i){
    			primes[j] = false;

    		}
    	}
    }

    int inp; cin >> inp;
    for (int i = inp; i<=n; ++i){
      if (primes[i]){
        cout << i;
        break;
      }
    }
    // cout << *ste.lower_bound(inp);
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
