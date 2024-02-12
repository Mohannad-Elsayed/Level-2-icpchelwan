#include <bits/stdc++.h>
using namespace std;

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
		
	long long n, x; cin >> n >> x;
	if (n == 1 || x == 1){
		cout << "IMPOSSIBLE";
		return 0;
	}
	long long arr[n]; multiset<long long> mst;
	for (long long i = 0; i<n; ++i){
		cin >> arr[i];
		mst.insert(arr[i]);
	}
	// for (long long x : mst) cout << x << ' ';
	long long indx1 = -1, indx2 = -1, ans = -1;
	for (long long i = 0; i<n; ++i){
		if (arr[i] < x){
			if (arr[i] == x-arr[i]){
				if(mst.count(x-arr[i]) > 1){
					indx1 = i+1;
					ans = x-arr[i];
					break;
				}
			}
			else{
				long long operand2 = x-arr[i];
				auto it = mst.find(operand2);
				if(it != mst.end()){
					ans = *it;
					indx1 = i+1;
					break;
				}
			}
			
		}
	}
	if (ans < 0) cout << "IMPOSSIBLE";
	else{
		cout << indx1 << ' ';
		for (long long i = 0; i<n; ++i){
			if (ans == x/2){
				if (arr[i] == ans && indx1 != i+1){
					cout << i+1;
					break;
				}
			}
			else{
				if (arr[i] == ans){
					cout << i+1;
					break;
				}
			}
		}
	}
	return 0;
}
