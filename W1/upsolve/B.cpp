// Problem: B. Regular Bracket Sequence
// Contest: Codeforces - Codeforces Beta Round 26 (Codeforces format)
// URL: https://codeforces.com/problemset/problem/26/B
// Memory Limit: 256 MB
// Time Limit: 5000 ms
// By: Sakura Yamauchi
// When: 2024-02-28 05:50:51
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
    
    /*
    string s; cin >> s;
    int curr = 0, res = 0;
    for (char ch : s){
    	if (ch == '('){
    		curr++; res++;
    	}
    	if (ch == ')' && curr > 0){
    		curr--; res++;
    	}
    }
    cout << res - curr;
    */
    
    string s; cin >> s;
    int cnt = 0;
    stack<char> stk;
    for (char& ch : s){
    	if (ch == '('){
    		stk.push(ch);
    	}
    	else{
    		if (stk.empty()){
    			cnt++;
    		}
    		else stk.pop();
    	}
    }
    cnt += stk.size();
    cout << s.size() - cnt;
    
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