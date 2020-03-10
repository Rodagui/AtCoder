/*B - TAKOYAKI FESTIVAL 2019*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	int nums;
	cin >> nums;

	vector <int> arr(nums);

	for (int i = 0; i < nums; ++i)
		cin >> arr[i];

	for (int i = 0; i < nums; ++i)
		for (int j = i + 1; j < nums; ++j)
			if(i != j)
				ans+= (arr[i]*arr[j]);
				
	cout << ans;

	return 0;
}