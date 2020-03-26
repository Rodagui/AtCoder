/*B - Golden Apple*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	double trees;
	double dist;
	double ans; 

	cin >> trees >> dist;

	ans = ceil(trees / (dist * 2 + 1));

	cout << ans;
	return 0;
}