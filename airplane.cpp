/*A - Airplane*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector <int> arr(3);

	for (int i = 0; i < 3; ++i)
		cin >> arr[i];

	sort(arr.begin(), arr.end());

	cout << arr[0] + arr[1];
	
	return 0;
}