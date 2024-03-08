// Problem: B. Sum mod 3 = 0?
// Contest: Codeforces - Level 3 Qualification Contest
// URL: https://codeforces.com/group/aTBjagg0Ld/contest/507591/problem/B
// When: 2024-03-07 16:01:56

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n; cin >> n;
    map<int, int> ste;
    int arr[n]; forn(i, 0, n){
    	cin >> arr[i];
    	arr[i] %= 10;
    	ste[arr[i]]++;
    }
    
    // each(x, ste) cout << x.F << ' ' << x.S << '\n'; cout << '\n';
    
    forn(i, 0, 10){
    	forn(j, 0, 10){
    		forn(k, 0, 9){
    			if ((i+j+k)%10 == 3){
    				map<int, int> frq;
    				frq[i]++; frq[j]++; frq[k]++; 
    				bool flag = true;
    				each(x, frq){
    					// x.F = 3 , x.S = frequency
    					if (!ste.count(x.F) || x.S > ste[x.F]){
    						flag = false;
    						break;
    					}
    				}
    				if (flag) return (cout << "YES"), 0;
    			}
    		}
    	}
    }
    ns
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    cin >> test;
    forn(i, 1, test+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
}