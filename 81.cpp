/*B - 81*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	int x;
	bool can = false;

	cin >> n;

	for (int i = 1; i <= 9; ++i)
	{
		x = n / i;
		if(i * x == n and x < 10){
			can = true;
			break;
		}
	}

	if(can)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}