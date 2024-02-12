#include <bits/stdc++.h>
using namespace std;
#define llu unsigned long long
int main() { 
	unsigned long long n; cin >> n;
	unsigned long long arr[n+1]{}, pfxn[n+1]{};
	for (unsigned long long i = 1; i<=n; ++i) cin >> arr[i];
	
	pfxn[1] = arr[1];
	for (int i = 2; i<=n; ++i) pfxn[i] = pfxn[i-1] + arr[i];
	llu sarr[n+1];
	copy(arr, arr+n+1, sarr);
	sort(sarr, sarr+n+1);
	llu pfxsarr[n+1]{};
	pfxsarr[1] = sarr[1];
	for (int i = 2; i<=n; ++i) pfxsarr[i] = pfxsarr[i-1] + sarr[i];
	
	int q; cin >> q;
	
	while(q--){
		int l, r, type; 
		cin >> type >> l >> r;
		
		if (type == 1){
			llu res = pfxn[r] - pfxn[l-1];
			cout << res;
		}
		else if (type == 2){
			llu res =  pfxsarr[r] - pfxsarr[l-1];
			cout << res;
		}
		
		
		cout << '\n';
	}
	return 0;
}
