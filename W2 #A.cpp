#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	set<int> ste;
	while(n--){
		int temp; cin >> temp;
		ste.insert(temp);
	}
	cout << ste.size();
	return 0;
}
