#include <bits/stdc++.h>
using namespace std;

int main() { 
	int tt; cin >> tt;
	while(tt--){
		
		int n, i; cin >> n;
		int arr[n]; 
		for (i=0; i<n; ++i) cin >> arr[i];
		int max = n, max_indx = n;
		while(max_indx != 0){
			for (i = 0; i<n; ++i){
				if (arr[i] == max){
					for (int j = i; j<max_indx; ++j){
						cout << arr[j] << ' ';
					}
					max_indx = i;
					max = 0;
					if (max_indx == 0) break;
					for (int k = 0; k<max_indx; ++k){
						if (arr[k] > max) max = arr[k];
					}
				}
			}
		}
		cout << '\n';
	}
	
	return 0;
}
