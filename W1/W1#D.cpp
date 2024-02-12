#include <bits/stdc++.h>
using namespace std;

int main() { 
	stack<int> t1,t2,t3;
	int n; cin >> n;
	int temp, indx = 1;
	while(n--){
		cin >> temp;
		if (temp == 1) t1.push(indx);
		else if (temp == 2) t2.push(indx);
		else t3.push(indx);
		indx++;
	}
	int least = min({t1.size(), t2.size(), t3.size()});
	cout << least << '\n';
	for (int i = 0; i<least; ++i){
		printf("%d %d %d\n", t1.top(), t2.top(), t3.top());
		t1.pop(); t2.pop(); t3.pop();
	}
	return 0;
}
