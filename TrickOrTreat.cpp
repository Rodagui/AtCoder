/*B - Trick or Treat*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int candies;
	int ans = 0;
	int stores;
	int cant;
	int s;

	cin >> stores >> candies;

	map <int, int> have;

	for (int i = 1; i <= stores; ++i)
	{
		have[i] = 0;
	}


	for (int i = 0; i < candies; ++i)
	{
		cin >> cant;

		for (int i = 0; i < cant; ++i)
		{
			cin >> s;
			have[s]++;		
		}	
	}

	map <int, int>:: iterator it;

	for (it = have.begin() ; it != have.end() ; ++it)
	{
		if(it-> second == 0)
			ans++;
	}

	cout << ans;

	return 0;	
}