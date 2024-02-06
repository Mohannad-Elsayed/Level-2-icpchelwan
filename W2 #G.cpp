#include <bits/stdc++.h>
using namespace std;

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
		
	int n, x; cin >> n >> x;
	int arr[n]; multiset<int> stt;
	for (int i = 0; i<n; ++i){
		cin >> arr[i];
		stt.insert(arr[i]);
	}
	int ans = -1, indx1 = -1, indx2 = -1;
	for (int i = 0; i<n; ++i){
		int num = arr[i];
		// if (x - num == num) continue;
		if(stt.count(x-num)){
			// cout << "count " << stt.count(x-num) << endl;
			ans = x-num;
			indx1 = i+1;
			break;
		}
	}
	if (ans < 0 || (ans == x/2 && stt.count(ans) == 1)) cout << "IMPOSSIBLE";
	else{
		for (int i = 0; i<n; ++i){
			if (arr[i] == ans && indx1 != i+1){ indx2 = i+1; break;}
		}
		cout << indx1 << ' ' << indx2;
	}
	return 0;
}
