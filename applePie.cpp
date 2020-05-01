/*A - Apple Pie*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int apples;
	int pieces;

	cin >> apples >> pieces;

	int ans = 0;
	ans = apples * 3;
	ans += pieces;

	ans /= 2;

	cout << ans;
	return 0;
}