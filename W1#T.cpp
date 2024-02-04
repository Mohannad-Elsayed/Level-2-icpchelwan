#include <bits/stdc++.h>
using namespace std;
#define llu long long int
#define FOR(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
int main() { 
	llu n, m, k;
	cin >> n >> m >> k;
	
	llu arr[n+1]{};
	FOR(i, 1, n+1) cin >> arr[i];
	
	// FOR(i, 1, n+1) cout << arr[i] << ' '; cout << '\n';
	
	llu q1[m+1][3]{}, q1par[n+2]{}, q1pfx[n+1]{};
	
	FOR(i, 1, m+1){
		cin >> q1[i][0] >> q1[i][1] >> q1[i][2];
		//        l            r          d
		// printf("l= %llu, r= %llu, d= %llu, i = %d\n", q1[i][0], q1[i][1], q1[i][2], i);
	}
	
	llu q2par[m+2]{}, q2pfx[m+1]{};
	FOR(i, 0, k){
		int l, r; cin >> l >> r;
		q2par[l] += 1; q2par[r+1] -= 1;
	}
	q2pfx[1] = q2par[1];
	FOR(i, 2, k+1) q2pfx[i] = q2pfx[i-1] + q2par[i];
	// cout << k;
	// FOR(i, 1, k+1) cout << q2pfx[i] << ' ';
	
	FOR(i, 1, m+1){
		llu l = q1[i][0], r = q1[i][1]+1, d = q1[i][2], w = q2pfx[i];
		q1par[l] += w*d; q1par[r] -= w*d;
	}
	q1pfx[1] = q1par[1];
	FOR(i, 2, n+1) q1pfx[i] = q1pfx[i-1] + q1par[i];
	
	FOR(i, 1, n+1) arr[i] += q1pfx[i];
	
	// for (int i = 1; i<=m; ++i) cout << q2par[i] << ' ';
	FOR(i, 1, n+1) cout << arr[i] << ' ';
	return 0;
}
