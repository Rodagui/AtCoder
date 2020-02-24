/*A - Blackjack*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int ans = 0;
	int n;

	for (int i = 0; i < 3; ++i)
	{
		cin >> n;
		ans += n;
	}

	if(ans >= 22)
		cout << "bust";
	else
		cout << "win";

	return 0;
}