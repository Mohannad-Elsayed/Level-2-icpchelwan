#include <bits/stdc++.h>
using namespace std;

int main() { 
	
	int n, i; cin >> n;
	if (n == 1){
		cout << "1\n1";
		return 0;
	}
	
	int arr[n]; 
	for (i=0; i<n; ++i) cin >> arr[i];
	vector<int> res;
	for (i=1; i<n; ++i){
		if (arr[i] == 1) res.push_back(arr[i-1]);
		if (i+1 == n) res.push_back(arr[i]);
	}
	cout << res.size() << '\n';
	for (auto x : res) cout << x << ' ';
	
	return 0;
}
