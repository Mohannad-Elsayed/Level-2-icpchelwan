// Problem: B. Yet Another Coin Problem
// Contest: Codeforces - Codeforces Round 931 (Div. 2)
// URL: https://codeforces.com/contest/1934/problem/B
// When: 2024-03-01 18:41:48

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
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
int test = 1;
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n; cin >> n;
    int res = 0;
    if (n > 30){
    	res += (n/15);
    	n%=15;
    }
    // cout << n << '\n';
    int tmp = INT_MAX;
    forn(one, 0,  31){
    	forn(three, 0, 11){
    		forn(six, 0, 6){
    			forn(ten, 0, 4){
    				forn(fif, 0, 3){
    					if (one*1+three*3+six*6+ten*10+fif*15 == n){
    						// printf("%d %d %d %d %d\n", one, three, six, ten, fif);
    						tmp = min(tmp, one+three+six+ten+fif);
    					}
    				}
    			}
    		}
    	}
    }
    if (n==8) res--;
    cout << res+tmp;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> test;
    while(test--){
      solve();
      cout << '\n';
    }
}