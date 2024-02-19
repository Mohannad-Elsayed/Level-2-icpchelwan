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
    int n = 1e8;
    vector<bool> primes(n+1, true);
  
    for(int i = 2; i*i<=n; ++i){
    	if (primes[i] == true){
        // cout << "prime= " << i <<endl;
    		for(int j = i*i; j<= n; j+=i){
    			primes[j] = false;

    		}
    	}
    }
    int cnt = 0;
    for (int i = 2; i<= n; i++){
      // cout << cnt << endl;
    	if (primes[i]){
    		cnt++;
        if (cnt%100 == 1){

    		cout << i << '\n';
        }
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
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
