/*A - The Number of Even Pairs*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int m;
	int n;
	int ans = 0;
	cin >> n >> m;

	if(n > 1){
		ans += (n * (n - 1) / 2);
	}

	if(m > 1){
		ans += (m * (m - 1)  / 2);
	}

	cout << ans;
	return 0;
}