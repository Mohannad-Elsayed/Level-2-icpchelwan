// Problem: M. Sorting Task
// Contest: Codeforces - Week #4
// URL: https://codeforces.com/group/bnEtzhg4a5/contest/500140/problem/M
// When: 2024-03-03 15:04:59

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
    char ch;
    int frq[26]{};
    forn(i, 0, n){
    	cin >> ch;
    	frq[ch-'a']++;
    }
    forn(i, 0, 26){
    	while(frq[i]--){
    		cout << (char)(i+'a');
    	}
    }
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // cin >> test;
    while(test--){
      solve();
      cout << '\n';
    }
}