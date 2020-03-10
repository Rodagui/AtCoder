/*B - Roller Coaster*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int friends;
	int ans = 0;
	int heigh;
	int h;

	cin >> friends >> heigh;

	for (int i = 0; i < friends; ++i)
	{
		cin >> h;
		if(h >= heigh)
			ans++;
	}

	cout << ans;

	return 0;
}