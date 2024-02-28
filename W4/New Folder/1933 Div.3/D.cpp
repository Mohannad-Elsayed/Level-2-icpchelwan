// Problem: D. Turtle Tenacity: Continual Mods
// Contest: Codeforces - Codeforces Round 929 (Div. 3)
// URL: https://codeforces.com/contest/1933/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-27 17:02:00
// Topic: 
// 
// Powered by CP Editor (https://cpeditor.org)

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
int test = 1;
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    // int n, tmp, mod = 0; cin >> n;
    // vector<int> v;
	// forn(i, 0, n){
		// cin >> tmp;
		// if (tmp == 1) mod++;
		// if (tmp != 1) v.pb(tmp);
	// }
	// tmp = 0;
	// sort(all(v), greater<int>());
    // // sort(arr, arr+n, greater<int>());
	// forn(i, 0, v.size()-1){
		// if (!(v[i]%v[i+1])) tmp++;
	// }
	// cout << (tmp <= (n/2) && mod <=1);
	
// 	
	// int n, ones = 0, tmp; cin >> n;
	// set<int> ste1; set<int, greater<int>> ste2;
	// map<int, int> mp;
	// int arr[n]; forn(i, 0, n){
		// cin >> tmp;
		// ste1.insert(tmp);
		// ste2.insert(tmp);
		// mp[tmp]++;
	// }
	// if (mp[1] > 1 || ste1.size() == 1) return (cout << "NO"), 0;
// 	
	// int mod1 = *ste1.begin();
	// auto tra = ste1.begin(); ++tra;
	// for (; tra != ste1.end(); ++tra){
		// mod1 %= (*tra); 
	// }
// 	
	// int mod2 = *ste2.begin();
	// tra = ste2.begin(); ++tra;
	// for (; tra != ste2.end(); ++tra){
		// mod2 %= (*tra); 
	// }
	// cout << mod1 << ' ' << mod2;
	
	
	int n, twos = 0, ones = 0, odd = 0; cin >> n;
	int arr[n]; forn(i, 0, n) cin >> arr[i];
	forn(i, 0, n){
		if (arr[i]%2 && arr[i] != 1) odd++;
		else if (arr[i] == 1) ones++;
		if (!(arr[i]%2)) twos++;
	}
	// cout << twos << ' '<< ones << ' ' << odd;
	if ( (( twos >= odd && (ones<2)) && odd) || (ones == 1)) ys 
	else ns
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin >> test;
    while(test--){
      solve();
      cout << '\n';
    }
}